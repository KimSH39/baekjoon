import sys

sys.setrecursionlimit(10**6)
input = sys.stdin.readline

dirY = [-1, 1, 0, 0]
dirX = [0, 0, -1, 1]

T = int(input())
MAX = 50 + 10


def dfs(y, x):
    global map_, visited

    visited[y][x] = True

    for i in range(4):
        newY = y + dirY[i]
        newX = x + dirX[i]

        if map_[newY][newX] and not visited[newY][newX]:
            dfs(newY, newX)


while T > 0:
    T -= 1

    M, N, K = map(int, input().split())

    map_ = [[False] * MAX for _ in range(MAX)]
    visited = [[False] * MAX for _ in range(MAX)]
    answer = 0

    for _ in range(K):
        x, y = map(int, input().split())
        map_[y + 1][x + 1] = True  # 0,0 아니고 1,1부터 사용

    # DFS 호출

    for i in range(1, N + 1):
        for j in range(1, M + 1):
            if map_[i][j] and not visited[i][j]:
                dfs(i, j)
                answer += 1

    print(answer)