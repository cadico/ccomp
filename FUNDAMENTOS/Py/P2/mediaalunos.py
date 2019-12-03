# -*- coding: utf-8 -*-
def le():
    n=int(raw_input('Digite a quantidade de alunos:'))
    m=int(raw_input('Digite a quantidade de notas por aluno:'))
    nomes=[None]*n #lista com os nomes dos alunos
    notas=[None]*n #lista com as notas de n alunos
    for i in range(n):
        nomes[i]=str(raw_input('Digite o nome do aluno:'))#le o nome do aluno
        notas[i]=[None]*m #cria m notas para cada aluno
        for j in range(m):
            notas[i][j]=(float(raw_input('Nota['+str(j+1)+']''['+str(nomes[i])+']')))
            #le e adiciona as notas à lista 
    return nomes,m,n,notas

def calc(nomes):
    media=[] #lista com as medias
    for i in range(len(nomes)-1): #bubble sort para a ordem alfabetica
        for j in range(1,len(nomes)):
            if nomes[i]>nomes[j]:
                nomes[i],nomes[j]=nomes[j],nomes[i]
                notas[i],notas[j]=notas[j],notas[i] #quando trocamos os alunos
                                                    #trocamos suas notas também
    for i in range(n):#calculando as medias
        soma=0
        cont=0
        for j in range(m):
            soma+=notas[i][j]#soma as notas notas[i][j] a posiçao do aluno i
            cont+=1
        media.append(soma/cont) #adiciona a media no final da lista
    return nomes,notas,media

def impr(nomes,notas,media):
    for i in range(n):#imprimindo
        print '\nAluno:',nomes[i]#imprime o nome do aluno
        print 'Notas:'
        for j in range(m): #percorre a lista de notas imprimindo as mesmas
            print notas[i][j],
        print '\nMédia:',media[i] #percorre a lista media imprimindo as mesmas
                                  #de acordo com o aluno a que se referem
    return
nomes,m,n,notas=le()
nomes,notas,media=calc(nomes)
impr(nomes,notas,media)
    
            
                            
