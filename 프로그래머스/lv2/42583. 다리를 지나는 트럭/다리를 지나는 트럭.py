from collections import deque

def solution(bridge_length, weight, truck_weights):
    answer = 0
    bridge = deque()
    wait = deque(truck_weights)
    complete = []
    current_weight = 0
    total_truck = len(truck_weights)
    cnt = 0
    while len(complete) != total_truck:
        cnt += 1
        if len(bridge) != 0:
            len_b = len(bridge)
            for i in range(len_b):
                tmpb = bridge.popleft()
                tmpb[1] -= 1
                if tmpb[1] == 0:   
                    complete.append(tmpb)
                    current_weight -= tmpb[0]
                else :
                    bridge.append(tmpb)
        if len(wait) == 0:
            continue
        tmp = wait.popleft()
        if len(bridge) != bridge_length and current_weight + tmp <= weight:
            bridge.append([tmp, bridge_length])
            current_weight += tmp
        else :
            wait.appendleft(tmp)
    return cnt