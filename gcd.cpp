
#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

int calculate_gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int A, B;
    if (!(cin >> A >> B)) return;

    int result = calculate_gcd(A, B);

    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
