def le():
    a=[]
    while True:
        x=input('Digite um valor')
        if x=='':
            break
        else:
            a.append(int(x))
    return a
def calc(a):
    from math import *
    b=[]
    for i in a:
        b.append(factorial(i))
    return b
def imp(a,b):
    print('{:*^40}'.format('Lista lida'))
    for i in a:
        print('{:10d}'.format(i))
    print('{:*^40}'.format('Lista calculada'))
    for i in b:
        print('{:10d}'.format(i))
    return
a=le()
b=calc(a)
imp(a,b)
            
