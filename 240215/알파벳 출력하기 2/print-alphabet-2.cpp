#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char cnt = 'A';

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        for(int j=0; j<n-i; j++){
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;
}