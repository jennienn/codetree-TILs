#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    if(n%2==0){
       int sum = 0;
       while(n>0){
        sum += n%10;
        n /= 10;
       }
       if(sum%5==0){
        cout << "Yes";
       }
    }else{
        cout << "No";
    }
   

    return 0;
}