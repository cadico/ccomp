# -*- coding: utf-8 -*-
'''ler um numero indeterminado de valores e determinar sua media, tratando os erros'''
def le():
    x=float(raw_input('Digite um valor:'))
    s=0
    cont=0
    while x>=0:
        s+=x
        cont+=1
        x=float(raw_input('Digite um valor:'))
    return s,cont
def calc(s,cont):
    media=s/cont
    return media
def imp(media):
    print 'A media é: {:5.2f}'.format(media)
    return
s,cont=le()
try:
    media=calc(s,cont)
    imp(media)
except:
    print 'ERRO, Processamento encerrado'
