
#include <iostream>

using namespace std;

void solve() {
    int X;
    const int CORRECT_PASSWORD = 1999;

    while (cin >> X) {
        if (X == CORRECT_PASSWORD) {
            cout << "Correct" << endl;
            return;
        } else {
            cout << "Wrong" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
