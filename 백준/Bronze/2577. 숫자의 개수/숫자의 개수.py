A = int(input())
B = int(input())
C = int(input())
sum = str(A*B*C)
n0 = 0
n1 = 0
n2 = 0
n3 = 0
n4 = 0
n5 = 0
n6 = 0
n7 = 0
n8 = 0
n9 = 0
for x in sum :
    if x == '0':
        n0 += 1
    elif x == '1':
        n1 += 1
    elif x == '2':
        n2 += 1
    elif x == '3':
        n3 += 1
    elif x == '4':
        n4 += 1
    elif x == '5':
        n5 += 1
    elif x == '6':
        n6 += 1
    elif x == '7':
        n7 += 1
    elif x == '8':
        n8 += 1
    else :
        n9 += 1
print(n0)
print(n1)
print(n2)
print(n3)
print(n4)
print(n5)
print(n6)
print(n7)
print(n8)
print(n9)
