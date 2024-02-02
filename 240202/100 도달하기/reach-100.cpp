#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[100];
    int cnt=0;

    a[1] = n;
    a[0] = 1;

    for(int i=2; i<100; i++){
        a[i] = a[i-1]+a[i-2];
        if(a[i]>100){
            break;
        }
        cnt++;
    }

    for(int i=0; i<cnt+3; i++){
        cout << a[i] << " ";
    }
 

    return 0;
}