N = int(input())
for _ in range(N):
    P1 = 0
    P2 = 0
    T = int(input())
    for _ in range(T):
        A,B = input().split(" ")
        if A == 'R':
            if B == 'S':
                P1 += 1
            elif B == 'P':
                P2 += 1
        elif A == 'S':
            if B == 'R':
                P2 += 1
            elif B == 'P':
                P1 += 1
        elif A == 'P':
            if B == 'R':
                P1 += 1
            elif B == 'S':
                P2 += 1
    if P1 == P2:
        print("TIE")
    elif P1 > P2:
        print("Player 1")
    else :
        print("Player 2")
