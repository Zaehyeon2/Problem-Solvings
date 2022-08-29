T = int(input())
for _ in range(T):
    N = int(input())
    Name = [0]*1000
    Drink = [0]*1000
    for i in range(N):
        Name[i],Drink[i] = input().split(" ")
        Drink[i] = int(Drink[i])
    print(Name[Drink.index(max(Drink))])
