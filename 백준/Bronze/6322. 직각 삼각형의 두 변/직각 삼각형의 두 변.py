count = 0
import math as m
while 1:
    count += 1
    [a,b,c] = input().split(" ")
    a = int(a)
    b = int(b)
    c = int(c)
    if a == 0 and b == 0 and c == 0:
        break
    print("Triangle #" + str(count))
    if c == -1:
        c = a**2 + b**2
        print("c =",format(m.sqrt(c),'.3f'))
    elif a == -1:
        if b >= c:
            print("Impossible.")
        else :
            a = c**2 - b**2
            print("a =",format(m.sqrt(a),'.3f'))
    elif b == -1:
        if a >= c:
            print("Impossible.")
        else :
            b = c**2 - a**2
            print("b =",format(m.sqrt(b),'.3f'))
    print()
