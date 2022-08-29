N = int(input())
for _ in range(N):
    S = input()
    if S.isdigit() :
        print(S)
    else :
        if S == 'P=NP':
            print("skipped")
        else :
            a = S.partition("+")
            print(int(a[0])+int(a[2]))
