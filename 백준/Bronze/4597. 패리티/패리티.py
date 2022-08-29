while 1:
    S = input()
    num_1 = 0
    if S == "#":
        break
    else:
        for x in S:
            if x == '1':
                num_1 += 1
            if x == 'o':
                if num_1 % 2 == 0:
                    print(S[:-1]+"1")
                elif num_1 % 2 == 1:
                    print(S[:-1]+"0")
            elif x == 'e':
                if num_1 % 2 == 0:
                    print(S[:-1]+"0")
                elif num_1 % 2 == 1:
                    print(S[:-1]+"1")
