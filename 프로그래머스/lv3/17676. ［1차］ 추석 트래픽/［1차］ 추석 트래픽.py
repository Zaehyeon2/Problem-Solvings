
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
def solution(lines):
    max_time = (24*3600+60*60+60)*1000+1000
    start = []
    end = []
    seq = 0
    current = 0

    answer = 0
    for line in lines:
        _, S, T = line.split(" ")
        S = get_time(S)
        T = T[:-1]
        if '.' in T:
            tmp = T.split('.')
            T = int(tmp[0])*1000 + int(tmp[1])
        else:
            T = int(T)*1000
        E = int(S)+T
        start.append(S-T+1)
        end.append(S)
    for i in range(len(lines)):
        cnt = 0
        for j in range(i, len(lines)):
            if start[j] < end[i] + 1000:
                cnt += 1
        answer = max(cnt, answer)
    return answer

def get_time(time):
    return (int(time[:2])*3600+int(time[3:5])*60+int(time[6:8]))*1000+int(time[9:])