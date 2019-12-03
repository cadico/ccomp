# -*- coding: cp1252 -*-
def le():
    m=int(raw_input('Digite o no. de linhas:'))
    n=int(raw_input('Digite o no. de colunas:'))
    a=[None]*m
    for i in range(0,m):
        a[i]=[None]*n
        for j in range(n):
            a[i][j]=float(raw_input('a['+str(i+1)+'],['+str(j+1)+'] '))
    return a,m,n
def encontra(a,m):
    b=float(raw_input('Digite o no. desejado:'))
    if b in a[0]:
        print 'O no. determinado se encontra na primeira linha'
    else:
        print 'O no. determinado NÃO se encontra na primeira linha'
    return
a,m,n=le()
b=encontra(a,m)

    
