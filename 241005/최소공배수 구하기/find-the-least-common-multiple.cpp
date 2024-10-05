#include <iostream>
using namespace std;

int findGcd(int n, int m){
        if(m == 0){
            return n;
        }else{
            return findGcd(m, (n%m));
        }
}

int findLcm(int n, int m, int gcd){
    return (n*m)/gcd;
}

int main() {
    
    int n,m;

    cin >> n >> m;

    int gcd = findGcd(n,m);
    int lcm = findLcm(n,m,gcd);

    
    cout << lcm;

}