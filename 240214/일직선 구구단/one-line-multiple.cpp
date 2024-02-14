#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int n;
    cin >> n;
	
	// 일직선으로 구구단을 출력합니다.
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++)
			cout << i << " * " << j << " = " << i * j << endl;
	}
	
	return 0;
}