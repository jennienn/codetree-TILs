#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i=1;
    int n;
    scanf("%d",&n);

    while(i>=n){
        printf("%d ",n);
        i *= 2;
    }
    return 0;
}