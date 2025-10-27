
#include <iostream>

void solve() {
    char X;
    std::cin >> X;

    // Check if the character is lowercase
    if (X >= 'a' && X <= 'z') {
        // Convert to uppercase by subtracting 32
        char result = X - 32;
        std::cout << result << std::endl;
    }
    // Otherwise, it must be uppercase
    else {
        // Convert to lowercase by adding 32
        char result = X + 32;
        std::cout << result << std::endl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
