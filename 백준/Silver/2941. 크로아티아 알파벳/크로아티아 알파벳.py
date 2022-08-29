inp = input()

size2 = {"c=", "c-", "d-", "lj", "nj", "s=", "z="}
size3 = {"dz="}
s2 = 0
s3 = 0
inp += "000"
ans = 0
for i in range(len(inp)-2):
    if (inp[i] + inp[i+1] + inp[i+2]) in size3:
        ans+=1
        s2 += 3
    elif (inp[i] + inp[i+1]) in size2:
        ans+=1
        s3 += 2
        if(inp[i] + inp[i+1] == "z="):
            if(i != 0 and inp[i-1] == "d"):
                ans -= 1
                s3 -= 2

print(ans + len(inp) - 3 - s2 - s3)