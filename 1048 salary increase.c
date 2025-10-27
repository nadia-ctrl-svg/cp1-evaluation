
#include <stdio.h>

int main() {
    double salary;
    double readjustment_rate;

    if (scanf("%lf", &salary) != 1) {
        return 1;
    }

    if (salary <= 400.00) {
        readjustment_rate = 0.15;
    } else if (salary <= 800.00) {
        readjustment_rate = 0.12;
    } else if (salary <= 1200.00) {
        readjustment_rate = 0.10;
    } else if (salary <= 2000.00) {
        readjustment_rate = 0.07;
    } else {
        readjustment_rate = 0.04;
    }

    double money_earned_increase = salary * readjustment_rate;
    double new_salary = salary + money_earned_increase;
    int percentage_output = (int)(readjustment_rate * 100);

    printf("Novo salario: %.2lf\n", new_salary);
    printf("Reajuste ganho: %.2lf\n", money_earned_increase);
    printf("Em percentual: %d %%\n", percentage_output);

    return 0;
}
