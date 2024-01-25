#include <stdio.h>

int main() {
    // 변수 선언
    int n;

	// 입력
	scanf("%d", &n);
    
    // 출력
	for(int i = n; i <= 100; i++) {
		if(i >= 90)
			printf("A ");
		else if(i >= 80)
			printf("B ");
		else if(i >= 70)
			printf("C ");
		else if(i >= 60)
			printf("D ");
		else
			printf("F ");
	}

    return 0;
}