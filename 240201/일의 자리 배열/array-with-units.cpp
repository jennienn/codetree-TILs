#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    
    int a[10];
    cin >> a[0] >> a[1];

    for(int i=2; i<10; i++){
    
        a[i] = a[i-1]+a[i-2];
        if(a[i]>=10){
            a[i]=a[i]%10;
        }

    }

    for(int i=0; i<10; i++){
        
        cout << a[i] << " " ;
    }


    
    return 0;
}