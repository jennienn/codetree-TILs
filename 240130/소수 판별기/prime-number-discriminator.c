#include <stdio.h>
#include <stdbool.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);

    bool s = true;

    for(int i=2; i<n; i++){
        if(i%n==0){
            s = false;
        }
    }

    if(s==true){
        printf("P");
    }
    else{
        printf("C");
    }
    return 0;
}