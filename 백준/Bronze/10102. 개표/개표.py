T = int(input())
An = 0
Bn = 0
S = input()
for i in range(0,T):
    if S[i] == 'A':
        An += 1
    elif S[i] == 'B':
        Bn += 1
if An > Bn :
    print("A")
elif Bn > An :
    print("B")
else :
    print("Tie")
