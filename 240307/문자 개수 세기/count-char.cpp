#include <iostream>
using namespace std;

int main() {
    
    string str;
    char s;

    getline(cin,str);
    cin >> s;

    int cnt=0;

    for(int i=0; i<=100; i++){
        if(str[i]==s){
            cnt++;
        }
    }

    cout << cnt;


    return 0;
}