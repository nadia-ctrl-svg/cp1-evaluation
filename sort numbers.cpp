
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int A, B, C;

    if (!(cin >> A >> B >> C)) {
        return 1;
    }

    vector<int> original = {A, B, C};

    vector<int> sorted_nums = {A, B, C};

    sort(sorted_nums.begin(), sorted_nums.end());

    for (int num : sorted_nums) {
        cout << num << endl;
    }

    cout << endl;

    for (int num : original) {
        cout << num << endl;
    }

    return 0;
}
