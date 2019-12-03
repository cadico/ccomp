'''Ler 5 valores para uma lista e determinar o maior deles sem usar o sort'''
a=[None]*5
for i in range(5):
    a[i]=float(raw_input('Digite um valor'))
maior=a[0]
for i in range(1,5):
    if a[i]>maior:
        maior=a[i]
print 'O maior valor e {:5.2f}'.format(maior)
