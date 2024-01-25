#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
    // 정수 부분을 먼저 출력
	printf("%d.", a / b);
    
    // a를 b로 나눈 나머지를 시작으로
    // 소수점 자리를 하나씩 계산
    a %= b;
	for(int i = 0; i < 20; i++) {
        // 나머지에 10 곱한 값을 기준으로
        // b로 나누었을 떄의 몫을 구해줌
		a *= 10;
		printf("%d", a / b);
        
        // a를 b로 나눈 나머지를 게속 갱신해줌
		a %= b;
	}
	
	return 0;
}