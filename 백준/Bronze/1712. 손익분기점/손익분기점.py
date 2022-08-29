A,B,C = input().split(" ")
A,B,C = int(A),int(B),int(C)
count = 1
if B >= C :
    print("-1")
else :
    Total = A//(C-B) + 1
    print(Total)
