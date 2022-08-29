def solution(s):
    answer = True
    s = list(s)
    check = []
    for i in range(len(s)):
        tmp = s[i]
        if tmp == ')':
            if len(check) == 0:
                return False
            else :
                if check.pop() == '(':
                    continue
                else:
                    return False
        else :
            check.append(tmp)
    if len(check) != 0:
        return False
    return True