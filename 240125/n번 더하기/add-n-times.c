#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,n;
    scanf("%d %d",&a,&n);

    for(int i=0; i<n; i++){
        a+=n;
        printf("%d\n",a);
    }
    return 0;
}