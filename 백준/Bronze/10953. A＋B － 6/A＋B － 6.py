Test_n = int(input())
while Test_n > 0 :
    S = input().partition(",")
    A = int(S[0])
    B = int(S[2])
    print(A + B)
    Test_n -= 1
