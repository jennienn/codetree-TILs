#include <iostream>
using namespace std;

int main() {
    char a[10];

    // 10개의 문자 입력 받기
    for(int i=0; i<10; i++){
        cin >> a[i];
    }

    // 거꾸로 출력 (개행 문자 제거)
    for(int i=9; i>=0; i--){
        if(a[i] != '\n') {
            cout << a[i];
        }
    }

    return 0;
}