#include <iostream>
using namespace std;

int main() {
    string str1;
    string str2;

    cin >> str1;
    cin >> str2;
    
    if(str1.length()>str2.length()){
        cout << str1 << " " << str1.length();
    }
    else if(str1.length()<str2.length()){
        cout << str2 << " " << str2.length();
    }
    else if(str1.length()==str2.length()){
        cout << "same" << endl;
    }
        
    return 0;
}