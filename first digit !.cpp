
#include <iostream>
#include <string>

using namespace std;

int main() {
    string X;

    if (!(cin >> X)) {
        return 1;
    }

    char first_digit_char = X[0];

    int first_digit = first_digit_char - '0';

    if (first_digit % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }

    return 0;
}
