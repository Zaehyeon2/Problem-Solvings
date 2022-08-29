while 1:
    [a,b,c] = input().split(" ")
    a = int(a)
    b = int(b)
    c = int(c)
    if a == 0 and b == 0 and c == 0:
        break
    if b**2 == a*c :
        print("GP", int(c * (c/b)))
    else :
        print("AP", c + (c-b))
