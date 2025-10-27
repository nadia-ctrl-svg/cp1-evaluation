
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    char c;
    std::cin >> c;

    if (c == 'z') {
        std::cout << 'a' << "\n";
    } else {
        std::cout << (char)(c + 1) << "\n";
    }

    return 0;
}
