#Aluno: Ricardo Rolo de Almeida
#Matr�cula: 201710031511
N=input('')
f=[0,1]
i=2
for i in range(2,N):
    f.append(f[i-2]+f[i-1])
for i in range(len(f)):
    print f[i],
