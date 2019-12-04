#Aluno: Ricardo Rolo de Almeida
#Matrícula: 201710031511
def read():
    tempo = raw_input("")
    tempo=tempo.split()
    tempo[0]=int(tempo[0])
    tempo[1]=int(tempo[1])
    tempo[2]=int(tempo[2])
    tempo[3]=int(tempo[3])
    return tempo
def calc():
    h1=int(tempo[0])
    m1=int(tempo[1])
    h2=int(tempo[2])
    m2=int(tempo[3])
    tatual=(h1*60)+m1
    talarme=(h2*60)+m2
    if talarme<tatual:
        talarme+=(24*60)
    tsono=talarme-tatual
    return tsono
tempo=read()
while (0<=tempo[0]<=23) and (0<=tempo[1]<=59) and (0<=tempo[2]<=23) and (0<=tempo[3]<=59):
    if tempo==[0,0,0,0]:
        break
    else:
        tsono=calc()
        print tsono
        tempo=read()

    
