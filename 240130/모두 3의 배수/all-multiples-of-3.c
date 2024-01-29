#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    
    int n;
    
    for(int i=0; i<5; i++){
        int n;
        scanf("%d\n",&n);
    }

    bool s = true;

    for(int i=0; i<=5; i++){
        if(n%3!=0){
            s = false;
        }
    }

    if(s==true){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}