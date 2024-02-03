#include <iostream>

using namespace std;

int main() {
    // 원소 수 n 입력받기
    int n;
    cin >> n;
    int a[100];
    int cnt[10]={};
	
	// arr[i]를 입력받은 후 카운팅 배열을 통해 각각의 빈도 저장
	for(int i=0; i<n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
	
    // 1부터 9까지 나온 횟수를 출력
    for(int i=1; i<=9; i++){
        cout << cnt[i] << endl;
    }
  

    return 0;
}