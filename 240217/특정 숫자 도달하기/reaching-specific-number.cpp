#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int arr[10];
    int sum = 0;
    int cnt = 0;
	
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

	for(int i = 0; i < 10; i++) {
        if(arr[i] >= 250) 
			break;
        sum += arr[i];
        cnt++;
    }
     
    double avg = (double)sum / cnt;
 
    // 출력
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    
    return 0;
}