
#include <iostream>

using namespace std;

int main() {
    int N;

    if (!(cin >> N)) {
        return 1;
    }

    const int DAYS_IN_YEAR = 365;
    const int DAYS_IN_MONTH = 30;

    int years, months, days;

    years = N / DAYS_IN_YEAR;
    int remaining_days = N % DAYS_IN_YEAR;

    months = remaining_days / DAYS_IN_MONTH;

    days = remaining_days % DAYS_IN_MONTH;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
