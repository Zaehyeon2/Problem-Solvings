mask = list(map(int, input().split()))
shirt = list(map(int, input().split()))
pants = list(map(int, input().split()))

outfit1=[]
outfit1.extend((mask[0], shirt[1], pants[0]))
outfit2=[]
outfit2.extend((mask[1], shirt[0], pants[1]))

outfit1.sort()
outfit2.sort()

tmp = []
tmp.extend((outfit1[0], outfit2[0]))
tmp.sort()

if tmp[1] - tmp[0] >= 2:
    print(tmp[0] * 2 + 1)
else:
    print(tmp[0] + tmp[1])