# 입력
N = int(input())  # 첫째 줄에는 컴퓨터의 수
M = int(input())  # 둘째 줄에는 네트워크 상에서 직접 연결되어 있는 컴퓨터 쌍의 수

# 그래프 틀 및 변수 만들기

graph = [[False] * (N + 1) for _ in range(N + 1)]  # 전체 그래프 표: 2차원 배열
visited = [False] * (N + 1)  # 방문 유무 작성 표
answer = 0


# dfs 함수
def dfs(idx):
    global visited, graph, answer

    visited[idx] = True

    # 내가 몇 개의 노드를 방문했는지 알고 싶은 거니까 dfs 함수가 한번 호출될 때마다 1 증가
    answer += 1

    for i in range(1, N + 1):
        # 내가 i번째 노드를 방문한 적 없다면 and 해당 노드의 idx가 방문된 적 없다면
        if not visited[i] and graph[idx][i]:
            dfs(i)


# 그래프에 연결 정보 채우기
# 이미 연결되어 있는 노드들 표시
for _ in range(M):
    x, y = map(int, input().split())

    graph[x][y] = True
    graph[y][x] = True

# 재귀 함수 호출
dfs(1)

# 출력
print(answer - 1)
