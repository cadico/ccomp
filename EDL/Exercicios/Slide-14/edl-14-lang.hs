data Cmd = Atr String Exp   -- atribuicao, ex.: x=1
         | Seq Cmd Cmd      -- sequencia,  ex.: x=1 ; y=x
         | Dcl String       -- declaracao, ex.: int x
         | Cnd Exp Cmd Cmd
         | Null
    deriving (Eq,Show)

data Exp = Num Int
         | Add Exp Exp
         | Sub Exp Exp
         | Var String
    deriving (Eq,Show)

verificaExp :: [String] -> Exp -> Bool
verificaExp vars (Var var)   = elem var vars
verificaExp vars (Add e1 e2) = verificaExp vars e1 && verificaExp vars e2
verificaExp vars (Sub e1 e2) = verificaExp vars e1 && verificaExp vars e2
verificaExp _    _           = True

avaliaExp :: Mem -> Exp -> Int
avaliaExp mem (Num v)     = v
avaliaExp mem (Add e1 e2) = (avaliaExp mem e1) + (avaliaExp mem e2)
avaliaExp mem (Sub e1 e2) = (avaliaExp mem e1) - (avaliaExp mem e2)
avaliaExp mem (Var id)    = consulta mem id

verificaCmd :: [String] -> Cmd -> ([String],Bool)
verificaCmd vars (Dcl var)     = (var:vars, True)
verificaCmd vars (Atr var exp) = (vars,     (elem var vars) && (verificaExp vars exp))
verificaCmd vars (Seq c1 c2)   = (v2,       b1 && b2) where
                                  (v1,b1) = verificaCmd vars c1
                                  (v2,b2) = verificaCmd v1   c2

p1 = Seq (Dcl "ret")
        (Atr "ret" (Add (Num 10)(Num 20)))
p2 = (Atr "x" (Add (Num 10)(Num 20)))
p3 = Seq (Atr "x" (Num 10))
         (Seq (Atr "x" (Num 20))
              (Atr "y" (Var "x")))
p4 = Seq (Dcl "x") p4
p5 = Seq (Dcl "y") p5
p6 = Atr "x" (Num 10)

------ 2 ------

type Mem = [(String,Int)]

consulta :: Mem -> String -> Int
consulta []           id = 0
consulta ((id',v'):l) id = if id == id' then
                         v'
                       else
                         consulta l id

escreve :: Mem -> String -> Int -> Mem
escreve mem id v = (id,v):mem

verificaProg :: Cmd -> Bool
verificaProg cmd = b1 where
                    (v1,b1) = verificaCmd [] cmd

avaliaCmd :: Mem -> Cmd -> Mem
avaliaCmd mem (Dcl _)      = mem
avaliaCmd mem (Atr id exp) = escreve mem id v where
                                v = avaliaExp mem exp
avaliaCmd mem (Seq c1 c2)  = avaliaCmd mem' c2 where
                                mem' = avaliaCmd mem c1
avaliaCmd mem (Cnd exp c1 c2) = if (avaliaExp mem exp) /= 0 then
                                    avaliaCmd mem c1
                                else
                                    avaliaCmd mem c2

avaliaProg :: Cmd -> Maybe Int
avaliaProg cmd = if verificaProg cmd == False
                    then Nothing
                    else Just (consulta mem' "ret") where
                                                mem' = avaliaCmd [] cmd
                  
eliminaDcl :: Cmd -> Cmd
eliminaDcl (Cnd exp c1 c2) = Cnd exp (eliminaDcl c1) (eliminaDcl c2)
eliminaDcl (Atr id exp) = Atr id exp
eliminaDcl (Dcl id) = Null 
eliminaDcl (Seq c1 c2) = if (eliminaDcl c1) == Null
                            then (eliminaDcl c2)
                            else if (eliminaDcl c2) == Null
                                then (eliminaDcl c1)
                            else 
                                Seq (eliminaDcl c1) (eliminaDcl c2)

main = print (eliminaDcl p4)