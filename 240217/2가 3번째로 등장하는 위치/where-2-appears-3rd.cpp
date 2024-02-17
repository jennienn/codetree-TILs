#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    int cnt=0;

    for(int i=0; i<=n; i++){

        cin >> a[i];
        
        if(a[i]==2){
            cnt++;
        }

        if(cnt==3){
            cout << cnt;
            break;
        }
    }

    

    return 0;
}