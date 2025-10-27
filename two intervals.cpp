
#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long L1, R1, L2, R2;

    if (!(std::cin >> L1 >> R1 >> L2 >> R2)) {
        return 1;
    }

    long long new_L = std::max(L1, L2);
    long long new_R = std::min(R1, R2);

    if (new_L <= new_R) {
        std::cout << new_L << " " << new_R << "\n";
    } else {
        std::cout << -1 << "\n";
    }

    return 0;
}
