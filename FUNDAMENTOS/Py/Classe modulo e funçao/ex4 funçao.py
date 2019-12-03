def le():
    x=int(raw_input('Digite um numero:'))
    m=x
    while True:
        x=int(raw_input('Digite um numero:'))
        if x==9999:
            break
        if x>m:
            m=x
    return m
def imp(m):
    print 'O maior valor e: {:1d}'.format(m)
    return
m=le()
imp(m)

