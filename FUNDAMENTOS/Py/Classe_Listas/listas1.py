'''Ler 5 valores para uma lista'''
a=[]
for i in range(5):
    x=float(input('Digite um valor:'))
    a.append(x)
    #para ordena-la em ordem crescente
    a.sort()
#para determinar o maior valor usando sort
print('O maior valor e ',a[-1])
