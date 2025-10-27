
#include <iostream>

void solve() {
    char X;
    std::cin >> X;

    if (X >= '0' && X <= '9') {
        std::cout << "IS DIGIT" << std::endl;

    }
    else {
        std::cout << "ALPHA" << std::endl;

        if (X >= 'A' && X <= 'Z') {
            std::cout << "IS CAPITAL" << std::endl;
        }
        else {
            std::cout << "IS SMALL" << std::endl;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
