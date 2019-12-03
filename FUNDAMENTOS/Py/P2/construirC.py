# -*- coding: cp1252 -*-
def le():
    m=int(raw_input('Digite o no. de termos:'))
    a=[None]*m
    b=[None]*m
    for i in range(m):
        a[i]=float(raw_input('Digite A['+str(i+1)+']'))
        b[i]=float(raw_input('Digite B['+str(i+1)+']'))
    return a,b,m
def calc(a,b):
    c=[None]*m
    for i in range(m):
        c[i]=[None]*2
        for j in range(2):
            c[i][0]=a[i]
            c[i][1]=b[i]
    return c
def impr(c):
    print '\nA:',a
    print '\nB:',b
    print '{:*^30s}'.format('Matriz Construída!')
    for i in range(m):
        for j in range(2):
            print '{:10.2f}'.format(c[i][j]),
        print
    return
a,b,m=le()
c=calc(a,b)
impr(c)
