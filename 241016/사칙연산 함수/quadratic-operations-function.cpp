#include <iostream>
using namespace std;

void cal(int a, char o, int c){
    if(o == '+'){
        cout << a << " + " << c << " = " << a+c << endl;
    }else if(o == '-'){
        cout << a << " - " << c << " = " << a-c << endl;
    }else if(o=='/'){
        cout << a << " / " << c << " = " << a/c << endl;
    }else if(o=='*'){
        cout << a << " * " << c << " = " << a*c << endl;
    }else{
        cout << "Fasle"<< endl;
    }
}

int main() {
    
    int a,c;
    char o;

    cin >> a >> o >> c;

    cal(a,o,c);

    return 0;
}