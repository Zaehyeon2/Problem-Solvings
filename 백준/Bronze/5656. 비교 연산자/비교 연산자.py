count = 1
while True:
    A,B,C = input().split(" ")
    A, C = int(A), int(C)
    if B == 'E':
        break
    elif B == '>':
        print("Case",str(count)+":", str(A > C).lower())
    elif B == '>=':
        print("Case",str(count)+":", str(A >= C).lower())
    elif B == '<':
        print("Case",str(count)+":", str(A < C).lower())
    elif B == '<=':
        print("Case",str(count)+":", str(A <= C).lower())
    elif B == '==':
        print("Case",str(count)+":", str(A == C).lower())
    elif B == '!=':
        print("Case",str(count)+":", str(A != C).lower())
    count +=1
