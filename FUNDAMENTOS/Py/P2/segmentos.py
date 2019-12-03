def le():
    x=str(raw_input('Digite uma frase:'))
    return x
def calc(x):
    cont=1
    for i in range((len(x)-1)):
        if x[i]!=x[i+1]:
            cont+=1
    return cont
def impr(cont):
    print 'A frase possui {:1d} segmentos consecutivos'.format(cont)
    return
x=le()
cont=calc(x)
impr(cont)
            
