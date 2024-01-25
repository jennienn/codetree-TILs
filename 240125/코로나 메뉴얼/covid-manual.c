#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    char a,b,c;
    int a1,b1,c1;
    int s=0;

    scanf("%c %d\n%c %d\n%c %d\n",&a,&a1,&b,&b1,&c,&c1);

    if(a=='Y' && a1>=37){
        if((b=='Y' && b1>=37) || (c=='Y'&&c1>=37)){
            printf("E");
        }
        else{
            printf("N");
        }
    else{
        if((b=='Y' && b1>=37) && (c=='Y'&&c1>=37)){
            printf("E");
        }
        else{
            printf("N");
        }
    }
    }
    return 0;
}