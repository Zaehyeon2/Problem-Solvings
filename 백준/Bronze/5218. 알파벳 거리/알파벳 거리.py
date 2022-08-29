T = int(input())
for _ in range(T):
    inp = input().split(" ")
    print("Distances:",end=' ')
    for i in range(len(inp[0])):
        if ord(inp[1][i])-ord(inp[0][i]) >= 0:
            print(ord(inp[1][i])-ord(inp[0][i]),end=" ")
        else:
            print(26 +(ord(inp[1][i])-ord(inp[0][i])),end=' ')
    print()
