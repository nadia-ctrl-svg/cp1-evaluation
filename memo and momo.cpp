
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long a, b, k;
    std::cin >> a >> b >> k;

    bool a_divisible = (a % k == 0);
    bool b_divisible = (b % k == 0);

    if (a_divisible && b_divisible) {
        std::cout << "Both\n";
    } else if (a_divisible) {
        std::cout << "Memo\n";
    } else if (b_divisible) {
        std::cout << "Momo\n";
    } else {
        std::cout << "No One\n";
    }

    return 0;
}
