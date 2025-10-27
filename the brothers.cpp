
#include <iostream>
#include <string>

void solve() {
    std::string F1, S1;
    std::string F2, S2;

    std::cin >> F1 >> S1;
    std::cin >> F2 >> S2;

    if (S1 == S2) {
        std::cout << "ARE Brothers" << std::endl;
    } else {
        std::cout << "NOT" << std::endl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
