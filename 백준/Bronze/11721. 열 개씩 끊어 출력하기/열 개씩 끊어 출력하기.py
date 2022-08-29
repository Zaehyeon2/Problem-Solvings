S = input()
leng = int(len(S))
for i in range(0,leng):
    if i % 10 == 9 :
        print(S[i])
    else :
        print(S[i],end="")
print()
