#include <iostream>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    int n;
    cin >> n;

    int len = str.length();

    for(int i=len; i>=len-n; i--){
        cout << str[i];
    }
    return 0;
}