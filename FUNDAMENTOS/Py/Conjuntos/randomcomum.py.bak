'''Preencher duas listas com 10 valores entre 1 e 50 aleatorios
imprimir os valores que existem nas duas listas'''
from random import *
def preencher():
    a=[]
    b=[]
    for i in range(10):
        x=randint(1,50)
        y=randint(1,50)
        a.append(x)
        b.append(y)
    print 'Lista A'
    for i in a:
        print '{:2d}'.format(i),
    print
    print '\nLista B'
    for j in b:
        print '{:2d}'.format(j),
    print '\n'
    return a,b
def calc(a,b):
    existe=False
    for i in a:
        if i in b:
            print '{:2d} esta em A e em B'.format(i)
            existe=True
    if existe==False:
        print 'Nao existem elementos em comum'
    return a,b
a,b=preencher()
a,b=calc(a,b)
