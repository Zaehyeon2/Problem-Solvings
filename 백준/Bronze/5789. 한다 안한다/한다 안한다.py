T = int(input())
for _ in range(T):
    S = input()
    while len(S) != 2:
        S = S[1:-1]
    if S[0] == S[1]:
        print("Do-it")
    else :
        print("Do-it-Not")
