#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int a[100][100];

    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j]=num;
            num++; 
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}