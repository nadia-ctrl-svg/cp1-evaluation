
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a, b;
    if (!(std::cin >> a >> b)) return 0;

    int result = a ^ b;

    std::cout << result << "\n";

    return 0;
}
