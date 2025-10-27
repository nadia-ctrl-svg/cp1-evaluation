
#include <iostream>
#include <algorithm>
#include <utility>

void solve() {
    long long A, B, C;
    std::cin >> A >> B >> C;

    std::pair<long long, long long> result = std::minmax({A, B, C});

    std::cout << result.first << " " << result.second << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
