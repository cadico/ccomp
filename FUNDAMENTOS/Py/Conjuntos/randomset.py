#preencher uma lista com 10 valores aleatorios
#imprimir os valores ordenados e sem elementos repetidos
from random import *
def preencher():
    a=[]
    for i in range(10):
        a.append(randrange(51))
    b=set(a)
    return a,b
def calc(b):
    c=list(b)
    for i in range(9):
        for j in range(i+1,10):
            if c[i]>c[j]:
                c[i],c[j]=c[j],c[i]
    return c
def impr(b,c):
    print 'Valores Sorteados!'
    for j in b:
        print '{:10d}'.format(j)
    print 'Valores ordenados!'
    for j in c:
        print '{:10d}'.format(j)
    return
a,b=preencher()
c=calc(b)
impr(b,c)
