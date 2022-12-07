def solution(s):
    answer = 0
    i = 0
    while(i < len(s)):
        if i == len(s)-1:
            answer += 1
            break
        current = s[i]
        same = 1
        diff = 0
        for j in range(i+1, len(s)):
            print(i, j, len(s))
            if j == len(s)-1:
                i = 999999
                answer += 1
                break
            if s[j] == current:
                same += 1
            else:
                diff += 1
            if same == diff:
                i = j+1
                answer += 1
                break
    return answer