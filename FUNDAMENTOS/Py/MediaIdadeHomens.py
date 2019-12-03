# -*- coding: cp1252 -*-
s=0
cont=0
media=0
while True:
    idade=float(raw_input('Digite a idade:'))
    if idade<0:
        print 'Tente uma idade positiva'
        break
    else:
        sexo=raw_input('Digite o sexo:').upper()
        if sexo not in ['M','F']:
            print 'Use m para masculino e f para feminino'
        if sexo=='M':
            s+=idade
            cont+=1
if cont==0:
    print 'Não existem homens'
else:    
    media=s/cont
print 'A media das idades dos homens é:{:5.2f}'.format(media)
        
        
