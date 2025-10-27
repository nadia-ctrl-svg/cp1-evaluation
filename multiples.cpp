
#include <iostream>

int main() {
    int A, B;

    std::cin >> A >> B;

    if (A % B == 0 || B % A == 0) {
        std::cout << "Multiples" << std::endl;
    } else {
        std::cout << "No Multiples" << std::endl;
    }

    return 0;
}
