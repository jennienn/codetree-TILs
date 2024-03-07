#include <iostream>
using namespace std;

int main() {
    
    string str[10];
    
    for(int i=0; i<10; i++){
        cin >> str[i];
    }

    int lenall=0;
    for(int i=0; i<10; i++){
      int len = str[i].length();
      lenall += len;
    }

    cout << lenall;
    
    return 0;
}