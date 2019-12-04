# -*- coding: cp1252 -*-
def le():
    lista=[]
    while True:
        nom=input('Digite o nome:')
        if nom =='':
            break
        idade =input('Digite a idade:')
        #cria um registro com nome e idade
        nome=nom+','+idade
        lista.append(nome)
    return lista
def calc(lista):
    #primeiro vamos ordenar a lista!
    lista.sort()
    #vamos descompactar a lista
    nome=[]
    idade=[]
    x=[]
    for i in lista:
        x=i.split(',') #divide cada membro da lista separado por (,)
        nome.append(x[0]) #primeiro termo é o nome
        idade.append(x[1]) #o segundo é a idade
    fim=len(nome)-1
    inicio=0
    nomep=input('Nome a ser procurado:')
    achei=False
    while inicio<=fim and achei==False:
        meio=(inicio+fim)//2
        if nome[meio]==nomep:
            achei=True
        elif nomep<nome[meio]:
            fim=meio-1
        else:
            inicio=meio+1
    return achei,nomep,idade[meio]
def impr(achei,nomep,ida):
    #cabeçalho
    print('\n{:*^30}\n'.format('resultado'))
    if achei:
        print('Nome {:^10s} com {:2s} ano(s) encontrado'.format(nomep,ida))
    else:
        print('Nome {:^30s} não encontrado'.format(nomep))
    return
#programa principal
lista=le()
achei,nomep,ida=calc(lista)
impr(achei,nomep,ida)
