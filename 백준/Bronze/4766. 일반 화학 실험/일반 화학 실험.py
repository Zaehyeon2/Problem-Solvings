N1 = float(input())
while True:
    N2 = float(input())
    if N2 == 999:
        break
    else :
        sum = "%.2f" %(N2-N1)
        print(sum)
        N1 = N2
