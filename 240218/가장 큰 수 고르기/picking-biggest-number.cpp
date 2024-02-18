#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a[10];

    for(int i=0; i<10; i++){
        cin >> a[i];
    }

    int max=0;
    for(int i=0; i<10; i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    cout << max << endl;

    return 0;
}