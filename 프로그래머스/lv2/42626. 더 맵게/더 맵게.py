import heapq

def solution(scoville, K):
    answer = 0
    sum = 0
    for x in scoville:
        sum += x
    heapq.heapify(scoville)
    while True:
        a = heapq.heappop(scoville)
        if a >= K: break
        if len(scoville) == 0: return -1
        b = heapq.heappop(scoville)
        sum = sum - a - b + (a + 2*b)
        heapq.heappush(scoville, (a + 2*b))
        answer += 1
    return answer