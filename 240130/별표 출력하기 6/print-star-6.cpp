#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        for(int j=0; j< (2 * n) - (2 * i) - 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=n-2; i>=0; i--){
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        for(int j=0; j< (2 * n) - (2 * i) - 1; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}