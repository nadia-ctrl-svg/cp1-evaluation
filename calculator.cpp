
#include <iostream>

using namespace std;

int main() {
    long long A, B;
    char S;

    if (!(cin >> A >> S >> B)) {
        return 1;
    }

    long long result;

    switch (S) {
        case '+':
            result = A + B;
            break;
        case '-':
            result = A - B;
            break;
        case '*':
            result = A * B;
            break;
        case '/':
            result = A / B;
            break;
        default:
            return 1;
    }

    cout << result << endl;

    return 0;
}
