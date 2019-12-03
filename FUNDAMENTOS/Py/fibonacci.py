n=int(raw_input('Digite n:'))
a,b=1,1
for i in range(n):
    print a,
    a,b=b,a+b
