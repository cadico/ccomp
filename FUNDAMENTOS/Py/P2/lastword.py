# -*- coding: cp1252 -*-
def le():
    x=str(raw_input('Digite uma frase:'))#frase a ser separada
    return x
def calc(x):
    x=x.split()#separa a string em uma lista em que cada termo da lista ser� uma
               #palavra da frase
    return x
def impr(x):
    print x[-1]#imprime o �ltimo termo da lista (ultima palavra da string)
    return
x=le()
x=calc(x)
impr(x)
