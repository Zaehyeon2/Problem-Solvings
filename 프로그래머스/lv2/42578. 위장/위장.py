def solution(clothes):
    answer = 1
    tmp = {}
    for name, kind in clothes:
        if kind not in tmp.keys():
            tmp[kind] = 1
        else: tmp[kind] += 1
    for x in tmp:
        answer *= (tmp[x]+1)
    return answer-1