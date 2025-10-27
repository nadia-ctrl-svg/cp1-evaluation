
#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long long a, b, c, d;
    std::cin >> a >> b >> c >> d;

    bool found = false;

    if ((a + b) - c == d) found = true;
    if (!found && a + (b - c) == d) found = true;

    if (!found && (a - b) + c == d) found = true;
    if (!found && a - (b + c) == d) found = true;

    if (!found && (a + b) * c == d) found = true;
    if (!found && a + (b * c) == d) found = true;

    if (!found && (a * b) + c == d) found = true;
    if (!found && a * (b + c) == d) found = true;

    if (!found && (a - b) * c == d) found = true;
    if (!found && a - (b * c) == d) found = true;

    if (!found && (a * b) - c == d) found = true;
    if (!found && a * (b - c) == d) found = true;

    if (found) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
