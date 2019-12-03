-- Exercicio 1 --

-- 1.1 --
data Exp = Num Int
         | Add Exp Exp
         | Sub Exp Exp
         | Mul Exp Exp
         | Div Exp Exp
         | And Exp Exp
         | Or Exp Exp
         | Not Exp
         | Greater Exp Exp
         | Equal Exp Exp
    deriving Show

avalia :: Exp -> Int
avalia (Num v) = v
avalia (Add e1 e2) = (avalia e1) + (avalia e2)
avalia (Sub e1 e2) = (avalia e1) - (avalia e2)
avalia (Mul e1 e2) = (avalia e1) * (avalia e2)
avalia (Div e1 e2) = div (avalia e1) (avalia e2)
avalia (And e1 e2) = if ((avalia e1) * (avalia e2) /= 0) then 1 else 0
avalia (Or e1 e2) = if ((avalia e1) + (avalia e2) == 0) then 0 else 1
avalia (Not e1) = if (avalia e1 == 0) then 1 else 0
avalia (Greater e1 e2) = if ((avalia e1) - (avalia e2) > 0 ) then 1 else 0
avalia (Equal e1 e2) = if ((avalia e1 - (avalia e2) == 0)) then 1 else 0


-- 1.2 --

--e0 = Num 1
--e1 = Add e0 (Sub (Num 10) (Num 20))
--e2 = Sub (Add (Num 5) (Num 5)) (Sub (Num 5) (Num 5))

-- 1.3 --

e0 = Greater (Num 6) (Num 5)

e1 = Equal (Num 15) (Num 15)

e2 = Add (Num 1) (Add (Num 2) (Add (Num 3) (Num 4)))
    -- 1 + (2 + (3 + 4)) = 10
e3 = Sub (Sub (Sub (Num 1) (Num 2)) (Num 3)) (Num 4)
    -- ((1 - 2) - 3) - 4 = -9
e4 = Sub (Num 1) (Sub (Num 2) (Sub (Num 3) (Num 4)))
    -- 1 - (2 - (3 - 4)) = -9
e5 = Sub (Sub (Num 1) (Num 2)) (Sub (Num 3) (Num 4))
    -- (1 - 2) - (3 - 4) = -9

-- 1.4 --

avalia' :: Exp -> Exp
avalia' (Num v) = (Num v)
avalia' (Add e1 e2) = (Num (f (avalia' e1) (avalia' e2)))
    where f (Num x) (Num y) = x + y
avalia' (Sub e1 e2) = (Num (f (avalia' e1) (avalia' e2)))
    where f (Num x) (Num y) = x - y
avalia' (Mul e1 e2) = (Num (f (avalia' e1) (avalia' e2)))
    where f (Num x) (Num y) = x * y
avalia' (Div e1 e2) = (Num (f (avalia' e1) (avalia' e2)))
    where f (Num x) (Num y) = div x y
avalia' (And e1 e2) = (Num (f (avalia' e1) (avalia' e2)))
    where f (Num x) (Num y) = if (x * y /= 0) then 1 else 0
avalia' (Or e1 e2) = (Num (f (avalia' e1) (avalia' e2)))
    where f (Num x) (Num y) = if (x + y == 0) then 0 else 1
avalia' (Not e1) = (Num (f (avalia' e1)))
    where f (Num x) = if (x == 0) then 1 else 0
avalia' (Greater e1 e2) = (Num (f (avalia' e1) (avalia' e2)))
    where f (Num x) (Num y) = if (x - y > 0) then 1 else 0
avalia' (Equal e1 e2) = (Num (f (avalia' e1) (avalia' e2)))
    where f (Num x) (Num y) = if (x - y == 0) then 1 else 0



main = print (avalia' e1)