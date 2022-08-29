S = [0] * 9
sum = 0
S[1] = input()
S[2] = input()
S[3] = input()
S[4] = input()
S[5] = input()
S[6] = input()
S[7] = input()
S[8] = input()
for i in range(1,9):
    if i % 2 == 0:
        for x in range(8):
            if x % 2 == 1:
                if S[i][x] == 'F':
                    sum += 1
    else :
        for x in range(8):
            if x % 2 == 0:
                if S[i][x] =='F':
                    sum += 1
print(sum)
