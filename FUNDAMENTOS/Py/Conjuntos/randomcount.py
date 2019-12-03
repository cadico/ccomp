#preencher uma lista com 20 valores inteiros entre 1 e 50 aleatorios
#imprimir quantas vezes cada valor aparece. Pode usar count.
from random import *
def preencher():
    a=[]
    for i in range(20):
        x=randint(1,50)
        a.append(x)
    return a
def calc(a):
    b=set(a)
    print 'Valores Sorteados!'
    for j in a:
        print j,
    print
    for i in b:
        z=a.count(i)
        print 'O numero {:2d} aparece {:2d} vezes'.format(i,z)
    return b
a=preencher()
b=calc(a)
    
