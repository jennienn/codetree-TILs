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
        for(int j=i+1; j<n; j++){
            if(a[j]>a[i]){
                swap(a[i],a[j]);
            }
        }
    }

    cout <<a[0] << " " << a[1];

    return 0;
}