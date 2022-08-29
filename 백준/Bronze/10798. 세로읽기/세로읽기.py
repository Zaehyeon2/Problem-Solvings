inp1 = ['0']*16
inp2 = ['0']*16
inp3 = ['0']*16
inp4 = ['0']*16
inp5 = ['0']*16
inp1 = input().ljust(15)
inp2 = input().ljust(15)
inp3 = input().ljust(15)
inp4 = input().ljust(15)
inp5 = input().ljust(15)
for i in range(15):
    if inp1[i] != ' ':
        print(inp1[i],end="")
    if inp2[i] != ' ':
        print(inp2[i],end="")
    if inp3[i] != ' ':
        print(inp3[i],end="")
    if inp4[i] != ' ':
        print(inp4[i],end="")
    if inp5[i] != ' ':
        print(inp5[i],end="")
print()
