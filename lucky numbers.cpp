
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    int N;
    if (!(cin >> N)) return;

    int digit1 = N / 10;
    int digit2 = N % 10;

    if (digit2 == 0) {
        if (digit1 % digit2 == 0) {
            cout << "YES" << endl;
            return;
        }
    } else {
        if (digit1 % digit2 == 0 || digit2 % digit1 == 0) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
