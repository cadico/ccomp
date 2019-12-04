#Aluno: Ricardo Rolo de Almeida
#Matrícula: 201710031511
def read():
    x=raw_input("")
    entrada=x.split(" ")
    entrada[0]=int(entrada[0])
    entrada[1]=int(entrada[1])
    entrada[2]=int(entrada[2])
    return entrada
def calc():
    if entrada[0]==entrada[1] and entrada[1]==entrada[2]:
        print "*"
    elif entrada[0]!=entrada[1] and entrada[1]!=entrada[2]:
        print "B"
    elif entrada[0]!= entrada[1] and entrada[1]==entrada[2]:
        print "A"
    elif entrada[0]==entrada[1] and entrada[1]!=entrada[2]:
        print "C"
    return
entrada=[]
while True:
    try:
        entrada=read()
        calc()
    except EOFError:
        break
    
    
