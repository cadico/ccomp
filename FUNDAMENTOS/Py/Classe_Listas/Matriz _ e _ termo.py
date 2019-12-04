# -*- coding: cp1252 -*-
#ler uma matriz e exibi-la, bem como o maior e o menor termo da linha escolhida
def le():
    m=int(input('Digite o numero de linhas -->'))
    n=int(input('Digite o numero de colunas -->'))
    a=[None]*m #cria a lista A com m linhas
    for i in range(m):
        a[i]=[None]*n #para cada linha cria n colunas
        for j in range(n):
            a[i][j]=float(input('Digite A['+str(i+1)+' ,'+str(j+1)+']'))
    return a,m,n
def calc():
    linha=int(input('Digite o no. da linha:'))
    linha-=1
    mx=a[linha][0]#o maior é o primeiro elemento da linha
    mm=a[linha][0]#o menor é o primeiro elemento da linha
    for i in range(1,n):
       if a[linha][i]>mx:
           mx=a[linha][i]
       elif a[linha][i]<mm:
           mm=a[linha][i]
    return mx,mm
def imp(a,m,n):
    print('{:*^30s}'.format('Matriz lida'))
    for i in range(m):
        for j in range(n):
            print('{:10.2f}'.format(a[i][j]), end=' ')
        print()
    print('Maior termo da linha escolhida = {:5.2f}'.format(mx))
    print('Menor termo da linha escolhida = {:5.2f}'.format(mm))
    return
#programa principal
a,m,n=le()
mx,mm=calc()
imp(a,m,n)
