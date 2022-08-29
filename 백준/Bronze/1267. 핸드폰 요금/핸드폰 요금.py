N = int(input())
Tel = input().split(" ")
Y = 0
M = 0
for x in Tel:
    Y += ((int(x)//30)+1)*10
    M += ((int(x)//60)+1)*15
if M < Y:
    print("M",M)
elif M > Y:
    print("Y", Y)
else :
    print("Y M",M)
