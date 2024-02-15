#include <iostream>
using namespace std;

int main() {
    int s,e;
    cin >> s >> e;
    int acnt=0;

    for(int i=s; i<=e; i++){
        int cnt = 0;
        for(int j=1; j<=i; j++){
            if(i%j==0)
                cnt++;
        }
        if(cnt == 3)
            acnt++;
    }

    cout << acnt;
    return 0;
}