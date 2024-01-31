#include <iostream>
using namespace std;

int main() {



    int a[100];
    int k;
    
    for(int i=0; i<100; i++){
        cin >> a[i];
        if(a[i]==0){
            k = i;
            break;
        }
    }



    cout << a[k-1]+a[k-2]+a[k-3];

    return 0;
}