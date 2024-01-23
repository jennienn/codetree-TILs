#include <stdio.h>

int main() {
    int a,b;
    int sum;

    scanf("%d %d",&a,&b);

    if(a>b)
        sum=a-b;
    else
        sum=b-a;
        
    printf("%d",sum);
    return 0;
}