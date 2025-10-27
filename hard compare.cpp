
#include <iostream>
#include <cmath>

void solve() {
    long long A, B, C, D;
    std::cin >> A >> B >> C >> D;

    double LHS = (double)B * std::log((double)A);
    double RHS = (double)D * std::log((double)C);

    if (LHS > RHS) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
