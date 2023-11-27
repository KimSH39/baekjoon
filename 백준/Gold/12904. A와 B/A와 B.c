#include <stdio.h>
#include <string.h>

char s[1001], t[1001];
int result = 0;

// 문자열을 뒤집는 함수
void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    scanf("%s", s);
    scanf("%s", t);

    while (1) {
        if (strlen(s) == strlen(t)) {
            if (strcmp(s, t) == 0)
                result = 1;
            break;
        }

        if (t[strlen(t) - 1] == 'A') {
            t[strlen(t) - 1] = '\0';
        } else {
            t[strlen(t) - 1] = '\0';
            reverseString(t);
        }
    }

    printf("%d\n", result);

    return 0;
}