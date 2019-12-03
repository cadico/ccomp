def le():
    n=int(raw_input('Digite o numero de termos:'))
    s=0
    for i in range(n):
        x=float(raw_input('Digite um valor:'))
        s+=x
    return s,n
def calc(s,n):
    media=s/n
    return media
def imp(media):
        print 'A media e: {:5.2f}'.format(media)
        return
s,n=le()
media=calc(s,n)
imp(media)
        
    
