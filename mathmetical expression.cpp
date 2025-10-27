
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long A, B, C;
    char S, Q;

    if (!(std::cin >> A >> S >> B >> Q >> C)) {
        return 1;
    }

    long long actual_result;

    if (S == '+') {
        actual_result = A + B;
    } else if (S == '-') {
        actual_result = A - B;
    } else if (S == '*') {
        actual_result = A * B;
    } else {
        return 1;
    }

    if (actual_result == C) {
        std::cout << "Yes" << "\n";
    } else {
        std::cout << actual_result << "\n";
    }

    return 0;
}
