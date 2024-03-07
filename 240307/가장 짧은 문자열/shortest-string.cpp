#include <iostream>
using namespace std;

int main() {
    
    string str1, str2, str3;

    cin >> str1 >> str2 >> str3;

    int min = 0;
    int max = 0;

    if(str1.length()>str2.length()){
        max = str1.length();
        min = str2.length();
    }
    else{
        max = str2.length();
        min = str1.length();
    }
    
    if(str3.length()>max){
        max = str3.length();
    }
    else{
        min = str2.length();
    }

    cout << max-min;


    return 0;
}