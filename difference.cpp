
#include <iostream>

int main() {
    long long A, B, C, D;

    std::cin >> A >> B >> C >> D;

    long long difference = (A * B) - (C * D);

    std::cout << "Difference = " << difference << std::endl;

    return 0;
}
