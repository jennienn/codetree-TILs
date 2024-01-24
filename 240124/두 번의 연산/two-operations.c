#include <stdio.h>

int main() {
    // 정수 a를 입력받음
    int a;
    scanf("%d", &a);

    // a가 홀수인 경우 3을 더함
    if (a % 2 == 1) {
        a += 3;
        printf("%d", a);
    }

    // 최종적으로 a가 3의 배수인 경우 3으로 나눔
    if (a % 3 == 0) {
        a /= 3;
        printf("%d", a);
    } else {
        printf("%d", a);
    }

    return 0;
}