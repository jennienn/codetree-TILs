#include <iostream>
using namespace std;

int main() {
    
    string str;
    cin >> str;

    int len = str.length();

    string s="";

    for(int i=0; i<=len; i++){
        if(i%2==1){
            s += str[i];
        }
    }

    for(int i=s.length(); i>=0; i--){
        cout << s[i];
    }


    return 0;
}