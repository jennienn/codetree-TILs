#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }

    for(int i=0; i<n; i++){
        a[i] *= a[i];
    }

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}