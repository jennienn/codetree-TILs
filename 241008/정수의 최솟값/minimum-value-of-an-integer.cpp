#include <iostream>
using namespace std;

int findMin(int a, int b, int c){
    
    if(a>=b){
        if(a>=c){
            if(b>=c){
                return c;
            }else{
                return b;
            }
    }else{
        if(a<=c){
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