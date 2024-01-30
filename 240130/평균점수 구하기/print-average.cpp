#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a[8];

    for(int i=0; i<8; i++){
        cin >> a[i];
    }
    double sum=0;

    for(int i=0; i<8; i++){
        sum += a[i];
    }

    double avg = sum/8;

    cout << fixed;
    cout.precision(1);
    cout << avg;

    return 0;
}