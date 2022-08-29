Test_n = int(input())
count = 0
while Test_n > 0 :
    S = input().partition(" ")
    A = int(S[0])
    B = int(S[2])
    count += 1
    print("Case #%d:" %count, A + B)
    Test_n -= 1
