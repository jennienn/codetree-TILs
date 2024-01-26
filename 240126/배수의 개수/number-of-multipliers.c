#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int num[10];
    int cnt1=0;
    int cnt2=0;

    for(int i=0; i<10; i++){
        scanf("%d\n",&num[i]);
    }

    for(int i=0; i<10; i++){
        if(num[i]%3==0){
            cnt1++;
        }
        if(num[i]%5==0){
            cnt2++;
        }
    }

    printf("%d %d",cnt1,cnt2);



    return 0;
}