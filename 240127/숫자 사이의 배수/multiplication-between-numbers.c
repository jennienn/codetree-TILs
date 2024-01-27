#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b;
    scanf("%d %d",&a,&b);

    int cnt=0;
    int sum=0;

    for(int i=a; i<=b; i++){
        if(i%5==0 || i%7==0){
            cnt++;
            sum += i;
        }
    }

    printf("%d %f",sum, sum/cnt);
    return 0;
}