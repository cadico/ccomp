def le():
    a=[]
    for i in range(5):
        x=raw_input('Digite um valor:')
        a.append(int(x))
    return a
def calc(a):
              b=[]
              for i in a:
                  if i%2!=0:
                      b.append(i*2)
                  else:
                      b.append(i+3)
              return b
def imp(a,b):
    print '{:*^40}'.format('Lista lida')
    for i in a:
        print '{:10d}'.format(i)
    print '{:*^40}'.format('Lista calculada')
    for i in b:
        print '{:10d}'.format(i)
    return
a=le()
b=calc(a)
imp(a,b)
                      
              
              
