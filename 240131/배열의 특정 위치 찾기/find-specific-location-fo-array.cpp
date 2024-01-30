#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    for(int i=0; i<10; i++){
        cin >> a[i];
    }

    cout << a[1]+a[3]+a[5]+a[7]+a[9] << " ";

    float avg = (float)(a[2]+a[5]+a[8])/3;
    cout << fixed;
    cout.precision(1);

    cout << avg;

    return 0;
}