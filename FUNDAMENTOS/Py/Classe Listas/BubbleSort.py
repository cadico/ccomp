def le():
    a=[]
    while True:
        x=raw_input('Digite um numero:')
        if x=='':
            break
        a.append(float(x))
    return a
def ordem(a):
    troca=True
    n=len(a)-1
    while n>0 and troca:
        troca=False
        for i in range(n):
            if a[i]>a[i+1]:
                a[i],a[i+1]=a[i+1],a[i]
                troca=True
        n-=1
    return a
def imp(a):
    print '{:>20}'.format('\nValores ordenados\n')
    for i in a:
        print '{:25.2f}'.format(i)
a=le()
a=ordem(a)
imp(a)

                    
