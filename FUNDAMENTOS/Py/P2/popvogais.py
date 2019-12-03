def le():
    a=str(raw_input('Digite uma frase:'))
    b=['a','A','e','E','i','I','o','O','u','U']
    return a,b
def eliminarvogais(a):
    a=list(a)
    for i in a:
        if i in b:
            a.remove(i)       
    return a
def impr(a):
    a2=''
    for i in a:
        a2+=i
    print '\nString calculada:',a2
    return
a,b=le()
a=eliminarvogais(a)
impr(a)
        
