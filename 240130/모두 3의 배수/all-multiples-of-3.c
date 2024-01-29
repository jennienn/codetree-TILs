#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    
    for(int i=0; i<5; i++){
        scanf("%d\n",&n);
    }
    bool s= true;

    for(int i=0; i<5; i++){
        if(n%3==0){
            s = false;
        }
    }

    if(n==true){
        printf("0");
    }
    else{
        printf("1");
    }
    return 0;
}