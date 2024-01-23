#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,bmi;
    
    scanf("%d %d",&a,&b);
    bmi = b/a^2;
    
    if(bmi>25)
        printf("%d",bmi);
        printf("obesity");
    else
        printf("%d",bmi);
    return 0;
}