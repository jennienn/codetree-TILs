#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int cnt=0;
    int sum=0;

    for(int i=0; i<10; i++){
        cin >> a[i];
    }

    for(int i=0; i<10; i++){
        if(a[i]%2==0 && a[i]!=0){
            cnt++;
            sum += a[i];
        }
    }

    cout << cnt << " " << sum;

    return 0;
}