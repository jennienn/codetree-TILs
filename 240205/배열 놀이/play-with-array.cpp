#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++) {
        int Q, N, N2;
        cin >> Q;

        if (Q == 1 || Q == 2) {
            cin >> N;
        } else {
            cin >> N >> N2;
        }

        if (Q == 1) {
            cout << a[N] << endl;
        } else if (Q == 2) {
            int foundIndex = 0;
            for (int j = 1; j <= n; j++) {
                if (a[j] == N) {
                    foundIndex = j;
                    break;
                }
            }
            cout << foundIndex << endl;
        } else if (Q == 3) {
            for (int j = N; j <= N2; j++) {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}