#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int min = a[0];
    int cnt=1;

    for(int i=1; i<n; i++){
        if(min>a[i]){
            min = a[i];
            cnt=1;
        }
        else if(min==a[i])
            cnt++;
    }

    cout << min << " " << cnt << endl;
    return 0;
}