# -*- coding: utf-8 -*-
frase1=raw_input('Digite uma frase:')
frases='' #frase sem espaços em branco
for i in frase1:
    if i!=' ':
        frases+=i
frasei=''
for i in range(-1,-(len(frases)+1,-1):
               frasei+=frases[i]
if frases==frasei:
               print '{:1s} é palidromo'.format(frases)
else: print '{:1s} não é palidromo'.format(frases)
