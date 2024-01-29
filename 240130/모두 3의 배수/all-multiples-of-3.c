#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    int cnt=0;
    
    for(int i=0; i<5; i++){
        scanf("%d\n",&n);
    }

    for(int i=0; i<5; i++){
        if(n%3==0){
            cnt++;
        }
    }

    if(cnt==5){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}