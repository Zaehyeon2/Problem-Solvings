for _ in range(3):
    T = int(input())
    sum = 0
    for _ in range(T):
        N = int(input())
        sum += N
    if sum == 0:
        print("0")
    elif sum > 0 :
        print("+")
    else :
        print("-")