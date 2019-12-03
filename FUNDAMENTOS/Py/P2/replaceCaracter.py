# -*- coding: cp1252 -*-
def le():
    frase1=str(raw_input('Digite uma frase:'))#string a ser calculada
    carac1=str(raw_input('Digite o caracter a ser substituido:'))#parametro 1
    carac2=str(raw_input('Digite o novo caracter:'))#parametro 2
    return frase1,carac1,carac2
def calc():
    frase2=list(frase1)#transforma a string em uma lista
    for i in range(len(frase1)):#percorre a lista
        if frase2[i]==carac1:#compara o parametro
            frase2[i]=carac2#substituição
    return frase2
def impr():
    frase3=''#string recursiva (transformará a lista em string novamente)
    for i in frase2:#transformando a lista...
        frase3+=i#concatena os termos da lista em uma string
    print 'Parâmetros substituídos! -->',frase3
    return
frase1,carac1,carac2=le()
frase2=calc()
impr()
        
