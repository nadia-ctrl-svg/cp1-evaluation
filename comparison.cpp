
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int A, B;
    char S;

    if (!(std::cin >> A >> S >> B)) {
        return 1;
    }

    bool is_right = false;

    switch (S) {
        case '<':
            if (A < B) {
                is_right = true;
            }
            break;
        case '>':
            if (A > B) {
                is_right = true;
            }
            break;
        case '=':
            if (A == B) {
                is_right = true;
            }
            break;
    }

    if (is_right) {
        std::cout << "Right" << "\n";
    } else {
        std::cout << "Wrong" << "\n";
    }

    return 0;
}
