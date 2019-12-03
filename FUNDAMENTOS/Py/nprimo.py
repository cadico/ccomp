# -*- coding: utf-8 -*-
#numero primo
n=int(raw_input('Digite n:'))
primo=True
for i in range(2,n):
    if%i==0:
        primo=False
if primo:
    print '{:4d} é primo'.format(n)
else:
    print '{:4d} não é primo'.format(n)
    
