#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a[10];
    int cnt=0;

    cin >> a[0];

    for(int i=1; i<10; i++){
        a[i] = a[i-1]+a[0];
    }

    for(int i=0; i<10; i++){
        cout << a[i] << " ";
        if(a[i]%5==0)
            cnt++;
        if(cnt >= 2)
            break;
    }

    return 0;
}