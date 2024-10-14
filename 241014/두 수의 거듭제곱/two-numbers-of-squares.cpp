#include <iostream>
using namespace std;

int square(int a, int b){
    int sum = 1;
    for(int i=1; i<=b; i++){
        sum *= a;
    }
    return sum;
}

int main() {
    
    int a,b;
    cin >> a >> b;

    cout << square(a,b);

    return 0;
}