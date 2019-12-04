'''Ler 5 valores para uma lista e determinar quantos deles sao maiores que a media entre eles'''
a=[None]*5
s=0
for i in range(5):
    a[i]=float(input('Digite um valor'))
    s+=a[i]
media=s/5
c=0
for i in range(5):
    if a[i]>media:
        c+=1
print('Existem {:3d} valores maiores que a media de {:5.2f}'.format(c,media))
