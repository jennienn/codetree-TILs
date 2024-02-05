#include <iostream>
using namespace std;

int main() {
    
    char w[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char a;
    cin >> a;

    int idx = -1;

    for(int i=0; i<6; i++){
        if(w[i]==a){
            idx=i;
        }
    }

    if(idx==-1){
        cout << "None";
    }
    else{
        cout << idx;
    }
    return 0;
}