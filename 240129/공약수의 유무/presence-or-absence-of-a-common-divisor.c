#include <stdio.h>
#include <stdbool.h>


int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    bool h = false;

    int smaller = (a < b) ? a : b; // 두 수 중 작은 수 선택

    // 1부터 작은 수까지 반복하면서 공약수 출력
    for (int i = 1; i <= smaller; ++i) {
            if (a % i == 0 && b % i == 0) {
                h = true;
            }
        }

    if(h==true) {
        printf("1\n");
    } 
    else {
        printf("0\n");
    }

    return 0;
    
    }