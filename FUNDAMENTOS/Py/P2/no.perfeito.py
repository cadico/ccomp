# -*- coding: cp1252 -*-
def le():
    x=int(raw_input('Digite um valor:'))
    return x
def calc(x):
    div=0
    perfeito=False
    for i in range(1,x):
        if x%i==0:
            div+=i
    if div==x:
        perfeito=True
    return perfeito
def impr(perfeito):
    if perfeito==True:
        print '{:1d} é perfeito'.format(x)
    if perfeito==False:
        print '{:1d} não é perfeito'.format(x)
    return
x=le()
perfeito=calc(x)
impr(perfeito)
        
    
