# -*- coding: cp1252 -*-
boimagro=10000
boigordo=-1
numerogordo=0
numeromagro=0
for i in range(1,91):
    peso=float(raw_input('Digite o peso do Boi(em quilogramas):'))
    if peso>boigordo:
        boigordo=peso
        numerogordo=i
    else:
        if peso<boimagro:
            boimagro=peso
            numeromagro=i
print 'O Boi{:2d} é o mais magro com {:5.2f} quilogramas de peso'.format(numeromagro,boimagro)
print 'O Boi{:2d} é o mais gordo com {:5.2f} quilogramas de peso'.format(numerogordo,boigordo)
        
    
