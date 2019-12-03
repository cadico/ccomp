# -*- coding: cp1252 -*-
midade=-1
while True:
    print '*'*60
    idade=float(raw_input('Digite a idade:'))
    if idade<0:
        print 'Tente uma idade positiva'
        break
    else:
        sexo=raw_input('Digite o sexo:').upper()
        if sexo not in ['M','F']:
            print 'Use m para masculino e f para feminino'
        if sexo=='F':
            if idade>midade:
                midade=idade
if midade==-1:
    print 'Não existem mulheres'
else:
    print 'A idade da mulher mais velha é:{:5.2f}'.format(midade)
