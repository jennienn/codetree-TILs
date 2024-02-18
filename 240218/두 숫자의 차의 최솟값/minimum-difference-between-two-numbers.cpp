#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int min[n];

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            min[j] = a[j]-a[i];
            break;
        }
    }

    int MIN = 0;
    for(int i=1; i<n; i++){
        if(min[1]>min[i]){
            MIN = min[i];
        }
    }

    cout << MIN;

  
    return 0;
}