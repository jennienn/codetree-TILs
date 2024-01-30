#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // 길이가 n인 직각삼각형을 뒤집어 출력
	for(int i = n-1; i >= 0; i--) {
        for(int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
	
    // 길이가 n-1인 직각삼각형을 출력
    for(int i = 1; i < n; i++) {
        for(int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}