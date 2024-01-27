#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int num[n];

    for(int i=0; i<n; i++){
        scanf("%d\n",&num[i]);
    }

    int sum=0;

    for(int i=0; i<n; i++){
        if(num[i]%2==1 && num[i]%3==0){
            sum += i;
        }
    }

    printf("%d",sum);
    return 0;
}