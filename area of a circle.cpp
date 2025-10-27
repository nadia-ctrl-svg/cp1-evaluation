
#include <iostream>
#include <iomanip>

int main() {
    double R;
    const double PI = 3.141592653;

    std::cin >> R;

    double area = PI * R * R;

    std::cout << std::fixed << std::setprecision(9) << area << std::endl;

    return 0;
}
