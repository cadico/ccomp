# -*- coding: cp1252 -*-
maltura1=0
maltura2=0
conti=0
contii=0
while True:
    nome=raw_input('Digite o nome:').upper()
    altura=float(raw_input('Digite a altura:'))
    if altura>=maltura1 and altura>maltura2:
            maltura1=altura
            conti+=1
    else:
        if maltura1<altura:
            conti-=1
        if altura>=maltura2 and altura<maltura1:
                maltura2=altura
                contii+=1
    if nome=='MARIA':
        
        print 'As maiores alturas são: {:3.2f}, com {:2d} candidatas e {:3.2f}, com {:2d} candidatas'.format(maltura1,conti,maltura2,contii)
        break
    
