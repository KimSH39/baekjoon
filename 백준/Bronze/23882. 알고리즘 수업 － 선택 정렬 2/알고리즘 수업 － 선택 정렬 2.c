#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int N, K;

void selectionSort(int A[], int size) {
    int swapCnt = 0;
    for (int last = size; last >= 2; last--) {
        // A[1..last] 중 가장 큰 수 A[i]를 찾는다
        int max = INT_MIN;
        int i = 0;
        for (int idx = 1; idx <= last; idx++) {
            if (max < A[idx]) {
                max = A[idx];
                i = idx;
            }
        }

        // last와 i가 서로 다르면 A[last]와 A[i]를 교환
        if (last != i) {
            int tmp = A[last];
            A[last] = A[i];
            A[i] = tmp;

            if (++swapCnt == K) {
                for (int j = 1; j <= N; j++) {
                    printf("%d ", A[j]);
                }
                printf("\n");
                return;
            }
        }
    }
    printf("-1\n");
}

int main() {
    scanf("%d %d", &N, &K);
    int* arr = (int*)malloc((N + 1) * sizeof(int));

    for (int i = 1; i <= N; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, N);
    free(arr);

    return 0;
}
