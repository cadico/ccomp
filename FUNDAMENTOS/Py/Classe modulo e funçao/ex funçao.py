# -*- coding: utf-8 -*-
'''Ler 3 valores diferentes e imprimir o maior deles'''
def le():
    a=float(raw_input('Digite o 1° valor:'))
    b=float(raw_input('Digite o 2° valor:'))
    c=float(raw_input('Digite o 3° valor:'))
    return a,b,c
def maior(a,b,c):
    if a>b and a>c:
        m=a
    elif b>c:
        m=b
    else:
        m=c
    return m
def imp(m):
    print 'O maior valor é: {:5.2f}'.format(m)
    return
x,y,z=le()
m=maior(x,y,z)
imp(m)

    
                      
