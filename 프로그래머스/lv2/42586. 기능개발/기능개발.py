from collections import deque

def solution(progresses, speeds):
    answer = []
    progresses = deque(progresses)
    speeds = deque(speeds)
    cnt = 0
    chk = False
    while len(progresses) != 0:
        len_p = len(progresses)
        for i in range(len_p):
            tmpp = progresses.popleft()
            tmps = speeds.popleft()
            tmpp += tmps
            progresses.append(tmpp)
            speeds.append(tmps)
        for i in range(len_p):
            tmpp = progresses.popleft()
            tmps = speeds.popleft()
            if tmpp >= 100:
                cnt += 1
                chk = True
            else :
                progresses.appendleft(tmpp)
                speeds.appendleft(tmps)
                if chk:
                    answer.append(cnt)
                    cnt = 0
                    chk = False
            if len(progresses) == 0:
                answer.append(cnt)

    return answer