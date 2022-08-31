from collections import deque

def solution(queue1, queue2):
    answer = 99999999
    cnt = 0
    tmpq1 = deque(queue1)
    sum1 = sum(queue1)
    tmpq2 = deque(queue2)
    sum2 = sum(queue2)
    for i in range(len(queue1)*3):
        if sum1 > sum2:
            tmp = tmpq1.popleft()
            tmpq2.append(tmp)
            sum1 -= tmp
            sum2 += tmp
        elif sum2 > sum1:
            tmp = tmpq2.popleft()
            tmpq1.append(tmp)
            sum2 -= tmp
            sum1 += tmp
        else:
            answer = min(answer, i)
            break
    if answer == 99999999:
        return -1
    return answer