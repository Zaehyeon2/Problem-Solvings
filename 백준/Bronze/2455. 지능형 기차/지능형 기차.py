total = 0
Max = 0
for _ in range(4):
    S = input().split(" ")
    total -= int(S[0])
    total += int(S[1])
    if total > Max :
        Max = total
print(Max)
