#include <stdio.h>

int main() {

    int n;
    int sum = 0;

    scanf("%d", &n);

    // 1부터 n-1까지의 수 중에서 약수를 찾는다
    for(int i = 1; i < n; i++) {
        if(n % i == 0)
            sum += i;
    }
    if(sum == n)
        printf("P");
    else
        printf("N");

    return 0;
}