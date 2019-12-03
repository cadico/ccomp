# -*- coding: cp1252 -*-
contm=0
contmn=0
conts=0
contn=0
porcentagem=0
for i in range(1,2001):
    sexo=raw_input('Digite o sexo:').upper()
    resposta=raw_input('Digite a resposta (Sim ou Não):').upper()
    if resposta=='SIM':
            conts+=1
    else:
        if resposta=='NÃO' or resposta=='NAO':
            if sexo=='M':
                contmn+=1
            else:
                contn+=1
porcentagem=(contmn/(float(contn+contmn)))*100
print 'O número de pessoas que responderam SIM é: ',conts
print 'O número de pessoas que responderam NÃO é: ',(contn+contmn)
print 'A porcentagem de homens que responderam NÃO é: {:2.2f}%'.format(porcentagem)
                
            
