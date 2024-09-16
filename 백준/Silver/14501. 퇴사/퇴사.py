# T = 상담 완료에 걸리는 기간
# P = 상담 했을 때 받는 금액

n = int(input())

dp = [0] * (n + 1)
works = []

for _ in range(n):
    x, y = map(int, input().split())
    works.append((x, y))

# 현재 날짜
c_day = 0

# 수익
money = 0

for i in range(n):
    if i < len(works):
        t, p = works[i]  # i 날짜의 상담 기간, 수익 할당

        if i + t <= n:  # 상담을 할 수 있다면
            # 해당 날짜로부터 상담 끝나는 날짜의 수익 = max(이제까지 번 수익, 오늘 날짜 상담 했을 때의 수익)
            dp[i + t] = max(dp[i + t], dp[i] + p)

        dp[i + 1] = max(dp[i + 1], dp[i])

print(dp[n])
