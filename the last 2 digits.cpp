
#include <iostream>

void solve() {
    long long A, B, C, D;
    std::cin >> A >> B >> C >> D;

    long long result = A % 100;

    result = (result * (B % 100)) % 100;

    result = (result * (C % 100)) % 100;

    result = (result * (D % 100)) % 100;

    if (result < 10) {
        std::cout << 0;
    }
    std::cout << result << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
