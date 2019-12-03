# -*- coding: cp1252 -*-
#Ler um nome e exibi-lo com todas as vogais em letra maiúscula
vogais=['a','e','i','o','u']
nome=raw_input('Digite um nome:').lower()
nomer=''
n=len(nome)
for i in range(n):
    if i not in vogais:
        nomer+=nome[i]
    else:
        nomer+=nome[i].upper()
print nomer
        
    
