N = int(input())
for i in range(N):
    inp = input()
    digit = [0]*10
    sum = 0
    for x in inp:
        if digit[int(x) - 1] == 0:
            digit[int(x) - 1] = 1
    for i in range(10):
        if digit[i] == 1:
            sum += 1
    print(sum)
