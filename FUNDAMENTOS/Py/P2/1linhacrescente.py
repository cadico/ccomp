def le():
    m=int(raw_input('Digite o no. de linhas:'))
    n=int(raw_input('Digite o no. de colunas:'))
    a=[None]*m #cria m linhas
    for i in range(m):
        a[i]=[None]*n #para cada linha cria n colunas
        for j in range(n):
            a[i][j]=float(raw_input('Digite A['+str(i+1)+','+str(j+1)+']'))
    return a,m,n
def calc(a):
    for i in range(n-1):
        for j in range(i+1,n):
            if a[0][i]>a[0][j]:#comparando um termo com o termo seguinte
                a[0][i],a[0][j]=a[0][j],a[0][i]#troca
    return a
def impr(a):
    print '\nMatriz lida'
    print 'Primeira linha ordenada:',a[0]
    return
a,m,n=le()
a=calc(a)
impr(a)
