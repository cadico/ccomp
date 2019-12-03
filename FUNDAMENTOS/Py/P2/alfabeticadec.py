# -*- coding: cp1252 -*-
def le():
    nomes=[]#lista com os nomes a serem lidos
    while True:
        nome=str(raw_input('Digite um nome:'))#leitura dos nomes
        if nome=='':#flag
            break
        nomes.append(nome)#adiciona o nome à lista
    return nomes
def calc(nomes):#ordenando 
    for i in range((len(nomes)-1)):
      for j in range(0,(len(nomes)-i)):
        if nomes[j]<nomes[j+1]:
          nomes[j],nomes[j+1]=nomes[j+1],nomes[j]#ordena em ordem decrescente
    return nomes
def impr(nomes):
    print nomes
    return
nomes=le()
nomes=calc(nomes)
impr(nomes)
