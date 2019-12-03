def le():
    m=int(raw_input('Digite o no. de linhas:'))
    n=int(raw_input('Digite o no. de colunas:'))
    a=[None]*m
    b=[None]*m
    for i in range(m):
        a[i]=[None]*n
        b[i]=[None]*n
        for j in range(n):
            a[i][j]=float(raw_input('Digite A['+str(i+1)+','+str(j+1)+']'))
            b[i][j]=float(raw_input('Digite B['+str(i+1)+','+str(j+1)+']'))
    return a,b,m,n
def calc(a,b):
    c=[None]*m
    for i in range(m):
        c[i]=[None]*n
        for j in range(n):
            c[i][j]=a[i][j]+b[i][j]
    return c
def impr(c):
    print '{:*^30s}'.format('Matriz lida')
    for i in range(m):
        for j in range(n):
            print '{:10.2f}'.format(c[i][j]),
        print
    return
a,b,m,n=le()
c=calc(a,b)
impr(c)
