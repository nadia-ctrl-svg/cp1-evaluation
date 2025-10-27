
#include <iostream>

using namespace std;

void solve() {
    int T;
    if (!(cin >> T)) return;

    while (T--) {
        int N;
        if (!(cin >> N)) return;

        long long factorial = 1;

        if (N < 0) {
        } else if (N == 0) {
            factorial = 1;
        } else {
            for (int i = 1; i <= N; ++i) {
                factorial *= i;
            }
        }

        cout << factorial << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
