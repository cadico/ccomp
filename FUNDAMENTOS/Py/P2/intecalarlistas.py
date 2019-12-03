# -*- coding: cp1252 -*-
def le():
    a=[]
    b=[]
    while True:
        x=raw_input('Digite um valor para a lista 1:')#valor a ser adicionado à lista a
        y=raw_input('Digite um valor para a lista 2:')#valor a ser adicionado à lista b
        if x=='' or y=='':#flag
            break
        else:
            a.append(x)#adicionando os termos à lista
            b.append(y)#acionando os termos à lista
    return a,b
def calc(a,b):
    c=[]#lista que conterá os termos intercalados
    for i in range(len(a)):
        c.append(a[i])#adiciona o termo a[i] no final da lista c
        c.append(b[i])#adiciona o termo b[i] no final da lista c (depois do termo a)
    return c
def impr(c):
    print 'Lista calculada:',c
    return
a,b=le()
c=calc(a,b)
impr(c)
    
