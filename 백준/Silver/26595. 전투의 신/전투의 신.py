N = int(input())

A, Pa, B, Pb = list(map(int, input().split()))

maxA = N // Pa

maxAn, maxBn = 0, 0
maxCombat = 0

for i in range(maxA+1):
    tmp = i * A + (((N - (i * Pa)) // Pb) * B)
    if tmp >= maxCombat:
        maxCombat = tmp
        maxAn = i
        maxBn = ((N - (i * Pa)) // Pb)
        
print(maxAn, maxBn)