# -*- coding: cp1252 -*-
def le():
    x=str(raw_input('Digite uma palavra:'))
    y=str(raw_input('Digite outra palavra:'))
    return x,y
def calc(x,y):
    prefixo=False
    if x in y:
        prefixo=True
    return prefixo
def impr(prefixo):
    if prefixo==True:
        print '{:1s} é prefixo de {:1s}'.format(x,y)
    if prefixo==False:
        print '{:1s} não é prefixo de {:1s}'.format(x,y)
x,y=le()
prefixo=calc(x,y)
impr(prefixo)
