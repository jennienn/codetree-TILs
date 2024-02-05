#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a[100];
    int cnt[11]={};

    for(int i=0; i<100; i++){
        cin >> a[i];
        if(a[i]==0){
            break;
        }
        if(a[i]<10){
            continue;
        }
        cnt[a[i]/10]++;
    }

    for(int i=10; i>=1; i--){
        cout << i << "0 - " << cnt[i] << endl;
    }
    return 0;
}