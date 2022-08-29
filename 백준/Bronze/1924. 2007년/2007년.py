M,D = input().split(" ")
M = int(M)
D = int(D)
days = D
while M > 1:
    M -= 1
    if M in [1,3,5,7,8,10,12]:
        days += 31
    elif M in [4,6,9,11]:
        days += 30
    elif M == 2:
        days += 28
if days % 7 == 0 :
    print("SUN")
elif days % 7 == 1 :
    print("MON")
elif days % 7 == 2 :
    print("TUE")
elif days % 7 == 3 :
    print("WED")
elif days % 7 == 4 :
    print("THU")
elif days % 7 == 5 :
    print("FRI")
elif days % 7 == 6 :
    print("SAT")
