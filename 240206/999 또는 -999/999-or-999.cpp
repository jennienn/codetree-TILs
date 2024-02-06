#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];
    for(int i=0; i<100; i++){
        cin >> a[i];
        if(a[i]==999 || a[i]==-999)
            break;
    }

    int max=a[0];
    int min=a[0];
    
    for(int i=1; i<100; i++){
        if(a[i]==999 || a[i]==-999)
            break;
            if(max<a[i]){
                max = a[i];
            }
            if(min>a[i]){
                min = a[i];
            }
        
    }

    cout << max << " " << min;
    return 0;
}