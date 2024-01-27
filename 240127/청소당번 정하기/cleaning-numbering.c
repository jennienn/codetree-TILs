#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);

    int c=0;
    int h=0;
    int t=0;

    for(int day=1; day<=n; day++){
        
        if(day%12==0)
            t++;
        else if(day%3==0)
            h++;    
        else if(day%2==0)
            c++;
    }

    printf("%d %d %d",c,h,t);


    return 0;
}