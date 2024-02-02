#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b;
    cin >> a >> b;

    int r[10];

    r[0] = a;
    r[1] = b;

    for(int i=2; i<10; i++){
        r[i] = r[i-1]+r[i-2]*2;
    }

    for(int i=0; i<10; i++){
        cout << r[i] << " ";
    }
    return 0;
}