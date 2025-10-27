
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void solve() {
    long long n, m, k;
    if (!(cin >> n >> m >> k)) return;

    long long count = 0;

    long long count_1E1M1B = min({n, m, k});

    count += count_1E1M1B;

    n -= count_1E1M1B;
    k -= count_1E1M1B;

    long long count_2E1B = min(n / 2, k);

    count += count_2E1B;

    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
