
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int A, B;

    std::cin >> A >> B;

    double result = (double)A / B;

    double floor_result = std::floor(result);
    double ceil_result = std::ceil(result);
    double round_result = std::round(result);

    std::cout << "floor " << A << " / " << B << " = "
              << std::fixed << std::setprecision(0) << floor_result << std::endl;

    std::cout << "ceil " << A << " / " << B << " = "
              << std::fixed << std::setprecision(0) << ceil_result << std::endl;

    std::cout << "round " << A << " / " << B << " = "
              << std::fixed << std::setprecision(0) << round_result << std::endl;

    return 0;
}
