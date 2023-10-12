#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int scores[N];
    double M = 0;
    double total = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
        if (scores[i] > M) {
            M = scores[i];
        }
    }
    
    for (int i = 0; i < N; i++) {
        total += (double)scores[i] / M * 100;
    }
    
    printf("%.6lf\n", total / N);
    
    return 0;
}
