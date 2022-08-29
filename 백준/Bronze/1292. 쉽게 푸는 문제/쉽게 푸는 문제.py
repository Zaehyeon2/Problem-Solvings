S = input().split(" ")
Start = int(S[0])
End = int(S[1])
Ans = []
sum = 0
for i in range(1,1001):
    Ans += [i] * i
for i in range(Start-1,End):
    sum += int(Ans[i])
print(sum)
