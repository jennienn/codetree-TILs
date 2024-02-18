#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int min_diff = INT_MAX;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int diff = abs(a[j] - a[i]);
            if(diff < min_diff) {
                min_diff = diff;
            }
        }
    }

    cout << min_diff;

    return 0;
}