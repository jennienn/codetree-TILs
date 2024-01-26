#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);

    int num[n];
    
    for(int i=0; i<n; i++){
        scanf("%d\n", &num[i]);
    }

    for(int i=0; i<n; i++){
		if(num[i]%3==0 && num[i]%2==1)
         printf("%d\n",num[i]);
    }



    return 0;
}