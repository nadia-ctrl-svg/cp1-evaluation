
#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a, b;
    std::cin >> a >> b;

    if (a == 0 && b == 0) {
        std::cout << "NO\n";
    } else {
        int diff = std::abs(a - b);
        if (diff <= 1) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }

    return 0;
}
