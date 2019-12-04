# -*- coding: utf-8 -*-
'''Ler n nomes para uma lista. Calcular quantos começam com a letra a'''
lista=[]
n=int(input('Digite n:'))
c=0
for i in range(n):
    nome=str(input('Digite um nome:')).lower()
    lista.append(nome)
    if nome[0]=='a':
        c+=1
print('Existem {:2d} nomes que começam com a letra a'.format(c))
