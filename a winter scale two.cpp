
#include <iostream>
#include <iomanip>
#include <cmath>

void solve() {
    int X, P;

    if (!(std::cin >> X >> P)) {
        return;
    }

    double original_price = (double)P / (1.0 - (double)X / 100.0);

    double rounded_up_price = std::ceil(original_price * 100.0) / 100.0;

    std::cout << std::fixed << std::setprecision(2) << rounded_up_price << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
