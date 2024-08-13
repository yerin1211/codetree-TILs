#include <stdio.h>

int main() {
    int n;
    int cnt = 0;

    for (int j = 0; j < 4; j++) {
        scanf("%d", &n);

        // 입력된 숫자가 짝수인 경우 cnt를 증가시킴
        if (n % 2 == 0) {
            cnt++;
        }
    }

    // 짝수가 등장한 횟수를 출력합니다.
    printf("%d", cnt);

    return 0;
}