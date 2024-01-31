#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    for(int i=0; i<10; i++){
        cin >> a[i];
    }

    int sum1=0;
    int sum2=0;

    for(int i=0; i<10; i++){
        if(i%2==0){
            sum1 += a[i];
        }
    }

    
    for(int i=0; i<10; i++){
        if(i%2==1){
            sum2 += a[i];
        }
    }

    if(sum1>sum2){
        cout << sum1-sum2;
    }
    else{
        cout << sum2-sum1;
    }
    return 0;
}