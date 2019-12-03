#Aluno: Ricardo Rolo de Almeida
#Matrícula: 201710031511
N=input('')
X=[]
for i in range(N):
    n=input('')
    if (2000>=n>=1):
        X.append(n)
X.sort()
X.append(0)
cont=1
for i in range(len(X)-1):
    if X[i]==X[i+1]:
        cont+=1
    else:
        print '{:1d} aparece {:1d} vez(es)'.format(X[i],cont)
        cont=1
    
    
