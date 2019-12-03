#ler um nome e exibir quantas vogais existem nele
nome=raw_input('Digite um nome:').lower()
vogal=['a','e','i','o','u']
cont=0
for i in nome:
    if i in vogal:
        cont+=1
print 'No nome {:1s} existem {:2d} vogais'.format(nome,cont)
