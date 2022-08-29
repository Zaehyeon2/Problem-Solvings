T = int(input())
for i in range(1,T+1):
    Max_Gap = 0
    S = input().split(" ")
    for j in range(1,len(S)):
        S[j] = int(S[j])
    S = S[1:]
    S.sort()
    for j in range(0,len(S)-1):
        if int(S[j+1]) - int(S[j]) > Max_Gap :
            Max_Gap = int(S[j+1]) - int(S[j])
    print("Class",i )
    print("Max", str(S[len(S)-1]) + ',',"Min", str(S[0]) + ',', "Largest gap" , str(Max_Gap))
