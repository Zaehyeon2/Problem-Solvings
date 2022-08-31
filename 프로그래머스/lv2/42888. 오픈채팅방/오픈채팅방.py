def solution(record):
    answer = []
    user = {}
    for x in record:
        x_split = x.split(" ")
        if x_split[0] in ["Enter", "Change"]:
            user[x_split[1]] = x_split[2]
    for x in record:
        x_split = x.split(" ")
        if x_split[0] == "Enter":
            answer.append(f"{user[x_split[1]]}님이 들어왔습니다.")
        if x_split[0] == "Leave":
            answer.append(f"{user[x_split[1]]}님이 나갔습니다.")
    return answer