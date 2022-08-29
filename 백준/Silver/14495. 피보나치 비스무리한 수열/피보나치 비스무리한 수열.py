f = [0]*116
f[0],f[1],f[2] = 1,1,1
for i in range(3,116):
    f[i] = f[i-1] + f[i-3]
print(f[int(input())-1])
