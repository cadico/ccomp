nome=raw_input('Digite o nome:')
for i in range(len(nome)+1):
    print nome[:len(nome)-i]
