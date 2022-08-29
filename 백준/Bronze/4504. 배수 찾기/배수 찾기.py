n = int(input())
while 1:
    N = int(input())
    if N == 0:
        break
    if N % n == 0 :
        print(str(N) + " is a multiple of " + str(n)+".")
    else:
        print(str(N) + " is NOT a multiple of " + str(n)+".")
