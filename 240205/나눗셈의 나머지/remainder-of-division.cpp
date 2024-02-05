#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int cnt[10] = {};
    int sum = 0;

    // a가 1 이하가 되기 전까지 반복
    while (a > 1) {
        int remainder = a % b;
        cnt[remainder]++;
        a = a / b;
    }

    // 등장한 나머지들의 횟수를 제곱하여 합 구하기
    for (int i = 0; i < 10; i++) {
        sum += cnt[i] * cnt[i];
    }

    cout << sum << endl;

    return 0;
}