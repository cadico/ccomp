#ler uma matriz e exibi-la
def le():
    m=int(raw_input('Digite o numero de linhas -->'))
    n=int(raw_input('Digite o numero de colunas -->'))
    a=[None]*m #cria a lista A com m linhas
    for i in range(m):
        a[i]=[None]*n #para cada linha cria n colunas
        for j in range(n):
            a[i][j]=float(raw_input('Digite A['+str(i+1)+' ,'+str(j+1)+']'))
    return a,m,n
def imp(a,m,n):
    print '{:*^30s}'.format('Matriz lida')
    for i in range(m):
        for j in range(n):
            print '{:10.2f}'.format(a[i][j]),
        print
    return
#programa principal
a,m,n=le()
imp(a,m,n)    
