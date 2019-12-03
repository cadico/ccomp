def le():
    m=int(raw_input('Digite o no. de linhas:'))#no. de linhas
    n=int(raw_input('Digite o no. de colunas:'))#no. de colunas
    a=[None]*m #cria uma lista com as linhas
    for i in range(m):
        a[i]=[None]*n #para cada linha cria n colunas
        for j in range(n):
            a[i][j]=float(raw_input('Digite A['+str(i+1)+' ,'+str(j+1)+']'))
    return a,m,n
def calc(a):
    b=[None]*n#cria uma lista com uma linha soma
    for j in range(n):#percorre as colunas das linhas 1 e 2
        b[j]=a[0][j]+a[1][j]#soma os termos da linha 1 a[0][j] com os da linha 2 a[1][j]
    return b
def impr(b):
    print '\nVetor soma:',b
a,m,n=le()
b=calc(a)
impr(b)
    
