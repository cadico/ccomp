#criptografia em ASCII
frase=raw_input('Digite uma frase:')
frasec=''
for i in frase:
    alfa=ord(i)
    alfa+=1
    beta=chr(alfa)
    frasec+=beta
print 'frase criptografada:{:1s}'.format(frasec)
#decriptografando
frase=''
for i in frasec:
    alfa=ord(i)
    alfa-=1
    beta=chr(alfa)
    frase+=beta
print 'frase normal: {:1s}'.format(frase)
    
