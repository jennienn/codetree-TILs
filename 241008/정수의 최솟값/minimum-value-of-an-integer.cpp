#include <iostream>
using namespace std;

int findMin(int a, int b, int c){
    
    if(a>b){
        if(c>b){
            return b;
        }else{
            return c;
        }
    }else{
        if(c>a){
            return a;
        }
    }
}

int main() {
    
    int a,b,c;
    cin >> a >> b >> c;

    cout << findMin(a,b,c);

    return 0;
}