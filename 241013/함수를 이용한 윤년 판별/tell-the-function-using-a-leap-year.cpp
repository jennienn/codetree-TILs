#include <iostream>
using namespace std;

bool Isyear(int n){
    if(n%4==0){
        if(n%100==0 && n%400 != 0){
            return false;
        }
        return true;
    }else
        return false;
}

int main() {
    
    int y;
    cin >> y;

    if(Isyear(y)){
        cout << "true";
    }else{
        cout << "false";
    }

    return 0;
}