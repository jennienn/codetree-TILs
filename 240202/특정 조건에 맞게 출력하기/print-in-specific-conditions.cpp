#include <iostream>
using namespace std;

int main() {

    int a[100];
    int cnt=0;

    for(int i=0; i<100; i++){
        cin >> a[i];
        if(a[i]==0)
            break;
        cnt++;
    }
    
    
    for(int i=0; i<cnt; i++){
        if(a[i]%2==1){
            cout << a[i]+3 << " ";
        }
        else{
            cout << a[i]/2 << " ";
        }
    }


    return 0;
}