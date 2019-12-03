# -*- coding: cp1252 -*-
def le():
    m=int(raw_input('Digite o no. de linhas:'))#numero de linhas
    n=int(raw_input('Digite o no. de colunas:'))#numero de colunas
    a=[None]*m
    for i in range(m):
        a[i]=[None]*n
        for j in range(n):
            a[i][j]=float(raw_input('Digite A['+str(i+1)+','+str(j+1)+']'))
    return a,m,n
def calc(a):
    soma1=0#soma dos termos da diag. principal
    soma2=0#soma dos termos da diag. secundaria
    for i in range(m):
        for j in range(n):
            if i==j:#condição para ser da diag principal
                soma1+=a[i][j]
            if (i+1)+(j+1)==(n+1):#condição para ser da diag secundaria
                soma2+=a[j][i]
    result=soma1-soma2#resultado final da diferença das somas
    return result
def impr(result):
    print 'O resultado final é: {:5.2f}'.format(result)
    return
a,m,n=le()
result=calc(a)
impr(result)
            
                    
