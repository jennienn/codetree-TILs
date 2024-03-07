#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    string str[n];

    for(int i=0; i<n; i++){
        cin >> str[i];
    }

    int sum = 0;
 
    for(int i=0; i<n; i++){
        int len = str[i].length();
        sum += len;
    }

    int cnt=0;
    for(int i=0; i<n; i++){
      if(str[i][0]=='a'){
        cnt++;
      }
    }

    cout << sum << " " << cnt << endl;

    return 0;
}