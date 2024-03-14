#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    string str[n];

    for(int i=0; i<n; i++){
        cin >> str[i];
    }

    string s="";

    for(int i=0; i<n; i++){
        s += str[i];
    }

    cout << s;
    
    return 0;
}