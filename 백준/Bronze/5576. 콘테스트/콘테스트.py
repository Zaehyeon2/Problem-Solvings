Aans, Bans,Alist,Blist = 0,0,[],[]
for i in range(10):
    Alist += [int(input())]
for i in range(10):
    Blist += [int(input())]
Alist.sort()
Blist.sort()
Aans += Alist[9] +Alist[8] +Alist[7]
Bans += Blist[9]+Blist[8]+Blist[7]
print(Aans,Bans)
