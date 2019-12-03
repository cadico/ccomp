def le():
    a=float(raw_input('valor 1'))
    b=float(raw_input('valor 2'))
    return a,b
def soma(a,b):
    s=a+b
    return s
def imp(s):
    print 'soma= {:5.2f}'.format(s)
    return
x,y=le()
s=soma(x,y)
imp(s)
