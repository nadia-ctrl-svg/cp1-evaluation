#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve() {
    int N;
    if (!(cin >> N)) return;

    if (N < 2) return;

    vector<bool> sieve(N + 1, true);
    sieve[0] = sieve[1] = false;

    for (int p = 2; p * p <= N; p++) {
        if (sieve[p] == true) {
            for (int i = p * p; i <= N; i += p)
                sieve[i] = false;
        }
    }

    bool first = true;
    for (int p = 2; p <= N; p++) {
        if (sieve[p]) {
            if (!first) {
                cout << " ";
            }
            cout << p;
            first = false;
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
