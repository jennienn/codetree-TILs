#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);

    int sum=0;
    int cnt=0;

    int num[n];
    for(int i=0; i<n; i++){
        scanf("%d",&num[i]);
    }

    for(int i=0; i<n; i++){
        cnt++;
        sum += num[i];
    }
    
    printf("%d %.1f",sum,(float)sum/cnt);
    return 0;
}