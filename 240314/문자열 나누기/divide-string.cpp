#include <iostream>
using namespace std;

int main() {
   
    int n;
    cin >> n;
    string str;

    for(int i=0; i<n; i++){
        getline(cin, str);
    }
    
    string s = "";

    for(int i=0; i<str.length(); i++){
        if(str[i]!=' ')
            s += str[i];
    }

    for(int i=0; i<=s.length(); i++){
       cout << s[i];
       if ((i + 1) % 5 == 0) {
            cout << endl;
        }
    }

    return 0;
}