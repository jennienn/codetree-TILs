#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);

    int c,h,t;

    for(int day=0; day<n; day++){
        if(day%2==0)
            c++;
        if(day%3==0)
            h++;
        if(day%12==0)
            t++;
    }

    printf("%d %d %d",c,h,t);


    return 0;
}