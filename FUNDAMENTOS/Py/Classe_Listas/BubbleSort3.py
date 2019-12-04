#bubble sort 2
a=[]
for i in range (0,5):
    x=input('Nome:')
    a.append(x)
for i in range(0,4):
    for j in range(i+1,5):
        if a[i]>a[j]:
            a[i],a[j]=a[j],a[i]
print (a)
