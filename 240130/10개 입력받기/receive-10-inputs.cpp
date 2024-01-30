#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int cnt=0;
    int sum=0;

    for(int i=0; i<10; i++){
        cin >> a[i];
        if(a[i]==0){
            break;
        }
        cnt++;
    }

    for(int i=0; i<cnt; i++){
        sum += a[i];
    }

    double avg = (double)sum/cnt;

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;

    return 0;
}