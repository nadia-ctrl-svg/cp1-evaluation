
#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    int X;
    if (!(cin >> X)) return;

    bool is_prime = true;

    for (int i = 2; i * i <= X; ++i) {
        if (X % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
