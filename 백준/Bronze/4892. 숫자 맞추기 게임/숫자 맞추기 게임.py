count = 1
while 1:
    n0 = int(input())
    if n0 == 0:
        break
    n1 = 3*n0
    if n1 % 2 == 0:
        n2 = n1/2
    else :
        n2 = (n1+1)/2
    n3 = n2*3
    n4 = int(n3//9)
    if n1 % 2 == 0:
        print(str(count) +'.',"even",n4)
    else :
        print(str(count) +'.',"odd",n4)
    count += 1
