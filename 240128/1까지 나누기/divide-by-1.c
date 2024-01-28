#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 0;
    int temp = n;  // 새로운 변수 temp를 선언하고 n의 초기값을 저장

    for (int i = 1; i <= temp; i++) {
        temp /= i;  // temp를 i로 나누어 새로운 값으로 갱신
        cnt++;
        if (temp <= 1) {
            break;  // 1 이하가 되면 루프 종료
        }
    }

    printf("%d", cnt);
    return 0;
}