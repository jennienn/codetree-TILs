#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p=0;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        if(a[i]==2){
            cnt++;
            if(cnt==3){
                p = i+1;
                break;
            }
        }
    }
    cout << p;
    
    return 0;
}