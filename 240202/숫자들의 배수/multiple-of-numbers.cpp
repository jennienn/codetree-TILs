#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a[10];
    int cnt;

    cin >> a[0];

    for(int i=1; i<10; i++){
        a[i] = a[i-1]+a[0];
    }

    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
        if(arr[i]%5==0)
            cnt++;
        if(cnt >=)
            break;
    }

    return 0;
}