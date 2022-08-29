def solution(prices):
    answer = []
    for i in range(len(prices)):
        for j in range(i+1, len(prices)):
            if prices[i] > prices[j]:
                answer.append(j-i)
                break
            else :
                if j == (len(prices)-1):
                    answer.append(len(prices)-1-i)
    answer.append(0)
    return answer

# i = 3
# j = 4
# len(prices) = 5