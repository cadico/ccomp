#Aluno: Ricardo Rolo de Almeida
#Matrícula: 201710031511
Vsoma=[]
X=input('')
V=[X]
while X!=0:
    if X%2==0:
        soma=0
        for i in range(5):
            soma+=X
            X+=2
    else:
        soma=0
        X+=1
        for i in range(5):
            soma+=X
            X+=2
    Vsoma.append(soma)
    X=input('')
    V.append(X)
for i in range(len(Vsoma)):
    print Vsoma[i]
            
    
