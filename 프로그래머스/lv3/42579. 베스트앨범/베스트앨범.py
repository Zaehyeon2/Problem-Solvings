def f1(mydict, x):
    return mydict[x]

def solution(genres, plays):
    answer = []
    j = {}
    p = {}
    for i in range(len(genres)):
        if genres[i] not in j:
            p[genres[i]] = plays[i]
            j[genres[i]] = {}
        else:
            p[genres[i]] += plays[i]
        j[genres[i]][i] = plays[i]
    print(p)
    print(p.items())
    p = sorted(p.items(), key = lambda x: -x[1])
    for key, _ in p:
        tmp = sorted(j[key].items(), key = lambda x: -x[1])       
        if len(tmp) == 1:
            answer.append(tmp[0][0])
        else:
            answer.append(tmp[0][0])
            answer.append(tmp[1][0])
    return answer