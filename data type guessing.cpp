
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void solve() {
    long long n, k, a;
    cin >> n >> k >> a;

    long long numerator = n * k;
    long long int_max = 2147483647LL;

    if (numerator % a != 0) {
        cout << "double" << endl;
        return;
    }

    long long result = numerator / a;

    if (result <= int_max) {
        cout << "int" << endl;
        return;
    }

    cout << "long long" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
