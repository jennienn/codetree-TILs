#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d", &a);

    if (a % 2 == 1) {
        a = a + 3;
    } else if (a % 3 == 0) {
        printf("%d", a / 3);
        return 0;  // 프로그램 종료
    }

    printf("%d", a);

    return 0;
}