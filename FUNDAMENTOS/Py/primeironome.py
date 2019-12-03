# -*- coding: utf-8 -*-
'''ler o nome completo de uma pessoa.
imprimir o primeiro nome'''
nome=raw_input('Digite o nome completo:')
pnome=''
for i in nome:
    if i!=' ':
        pnome+=i
    else:
        break
print 'O primeiro nome é {:1s}'.format(pnome)
    
