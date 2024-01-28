#include <stdio.h>

int main() {
    int cnt = 0;
    int sum = 0;

    while (1) {
        int n;
        scanf("%d", &n);

        if (n < 20 || n >= 30) {
            // 20대가 아닌 다른 나이가 입력되었을 때, 반복 종료
            break;
        }

        sum += n;
        cnt++;
    }

    // 입력된 나이들의 평균을 계산하여 출력
    printf("%.2f\n", (float)sum / cnt);

    return 0;
}