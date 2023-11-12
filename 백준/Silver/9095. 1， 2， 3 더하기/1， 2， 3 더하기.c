#include <stdio.h>

int calculateSum(int N) {
    int dp[9];
    
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    if (N < 4) {
        return dp[N];
    } else {
        for (int i = 4; i <= N; i++) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
        return dp[N];
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);
        int result = calculateSum(N);
        printf("%d\n", result);
    }
    return 0;
}