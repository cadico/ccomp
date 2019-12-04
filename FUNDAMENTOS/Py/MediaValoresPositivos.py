#ler uma qntd indeterminada de valores positivos e determinar sua media
s=0
media=0
n=0
while True:
    x=float(eval(input('Digite um valor:')))
    if x<0:
        break
    else:
        s+=x
        n+=1        
print(('Media = {:5.2f}'.format(s/n)))
    
