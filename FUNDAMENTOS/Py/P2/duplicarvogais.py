def le():
    a=str(raw_input('Digite uma frase:'))#frase lida
    b=['a','A','e','E','i','I','o','O','u','U']#lista com as vogais
    return a,b
def duplicarvogais(a):
    a2=''#string recursiva
    for i in a:#percorre a string lida
        if i in b:#se for vogal...
            a2+=i#adiciona a vogal
        a2+=i#adiciona mais uma letra, se for vogal, ela sera duplicada pois
                                                    #ja foi adicionada antes
    return a2
def impr(a):
    print '\nVogais duplicadas! -->',a2
    return
a,b=le()
a2=duplicarvogais(a)
impr(a)
        
