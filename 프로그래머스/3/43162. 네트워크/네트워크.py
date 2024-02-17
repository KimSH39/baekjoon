# n개의 컴퓨터, map computers

# 0 1 2 3
# 1 1 1 0
# 2 1 1 0
# 3 0 0 1

def dfs(computers, visited, v):
    visited[v] = True
    
    for i in range(len(computers)):
        if computers[v][i] == 1 and not visited[i]:
            dfs(computers, visited, i)

def solution(n, computers):
    visited = [False] * n
    answer = 0
    
    # 큰 배열
    for i in range(n):
        if visited[i] == False:
            dfs(computers, visited, i)
            answer += 1
            
    return answer