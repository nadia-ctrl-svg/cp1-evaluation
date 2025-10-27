
#include <iostream>

using namespace std;

void solve() {
    int N;
    if (!(cin >> N)) return;

    bool found_even = false;
    for (int i = 2; i <= N; i += 2) {
        cout << i << endl;
        found_even = true;
    }

    if (!found_even) {
        cout << -1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
