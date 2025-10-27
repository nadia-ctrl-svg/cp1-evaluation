
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string n_str;
    cin >> n_str;

    size_t decimal_pos = n_str.find('.');

    bool is_int = true;

    if (decimal_pos != string::npos) {
        for (size_t i = decimal_pos + 1; i < n_str.length(); ++i) {
            if (n_str[i] != '0') {
                is_int = false;
                break;
            }
        }
    }

    string integer_part;
    if (decimal_pos != string::npos) {
        integer_part = n_str.substr(0, decimal_pos);
    } else {
        integer_part = n_str;
    }

    if (is_int) {
        cout << "int " << integer_part << endl;
    } else {
        string decimal_part_str = "0." + n_str.substr(decimal_pos + 1);
        cout << "float " << integer_part << " " << decimal_part_str << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
