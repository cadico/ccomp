# -*- coding: cp1252 -*-
#Mudar a 4º letra para maiúscula
nome=eval(input('Digite o nome:'))
n=len(nome)
nomer=''
for i in range(n):
    if i!=3:
        nomer+=nome[i]
    else:
        nomer+=nome[i].upper()
print(nomer)
        
