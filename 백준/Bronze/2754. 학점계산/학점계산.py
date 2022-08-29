def pluszerominu(s) :
    score = 0
    if s[1] == '+' :
        score += 0.3
    elif s[1] == '-' :
        score -= 0.3
    return score

A = input()
if A == 'F' :
    print("0.0")
elif A[0] == 'A' :
    print(4.0 + pluszerominu(A))
elif A[0] == 'B' :
    print(3.0 + pluszerominu(A))
elif A[0] == 'C' :
    print(2.0 + pluszerominu(A))
elif A[0] == 'D' :
    print(1.0 + pluszerominu(A))
