from collections import deque

def solution(priorities, location):
    answer = 0
    wait_list = deque([])
    cnt = 0
    for x in priorities:
        wait_list.append((x, cnt))
        cnt += 1
    cnt = 0
    priorities = deque(sorted(priorities, key = lambda k: -k))
    while len(wait_list) != 0:
        tmpw = wait_list.popleft()
        tmpp = priorities.popleft()
        if tmpw[0] == tmpp:
            cnt += 1
            if tmpw[1] == location:
                return cnt
        else :
            wait_list.append(tmpw)
            priorities.appendleft(tmpp)
    return answer