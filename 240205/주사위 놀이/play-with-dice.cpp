#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int cnt[7]={};

    int a[10];
    for(int i=0; i<10; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }  

    for(int i=1; i<=6; i++){
        cout << i << " - " << cnt[i] << endl;
    }


    return 0;
}