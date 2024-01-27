#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int num[10];
    for(int i=0; i<10; i++){
        scanf("%d\n",&num[i]);
    }

    int sum=0;
    int cnt=0;

    for(int i=0; i<10; i++){
        if(num[i]>=0 && num[i]<=200){
            cnt++;
            sum += num[i];
        }
    }

    

    printf("%d %.1f", sum, (float)sum/cnt);

    return 0;
}