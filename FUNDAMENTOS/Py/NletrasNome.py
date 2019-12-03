#contar quantas letras a existem em um nome
cont=0
nome=raw_input('Digite o nome:')
for i in nome:
    if i=='a' or i=='A':
        cont+=1
print 'Existem {:2d} letras a no nome'.format(cont)
