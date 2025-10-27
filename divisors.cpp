
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve() {
    int N;
    if (!(cin >> N)) return;

    vector<int> divisors;

    for (int i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            divisors.push_back(i);

            if (i * i != N) {
                divisors.push_back(N / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for (int divisor : divisors) {
        cout << divisor << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
