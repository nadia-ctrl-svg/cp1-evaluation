
#include <iostream>
#include <iomanip>

using namespace std;

void solve() {
    int N;
    if (!(cin >> N)) return;

    for (int i = 1; i <= 12; ++i) {
        cout << N << " * " << i << " = " << N * i << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
