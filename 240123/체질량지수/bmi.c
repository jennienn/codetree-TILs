#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,bmi;
    
    scanf("%d %d",&a,&b);
    bmi = b*100*100/(a*a);
    
    if(bmi>25){
        printf("%d\n",bmi);
        printf("Obesity");
    }
    else
        printf("%d",bmi);

    return 0;
}