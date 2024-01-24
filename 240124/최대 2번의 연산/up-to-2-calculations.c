#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);

    if(a % 2 == 0){
        printf("%d",a/2);
    }
    else{
        printf("%d",(a+1)/2);
    }
    return 0;
}