#include <stdio.h>

int main() {
    char name[100]; // To store the seller's name
    double fixedSalary, salesTotal, totalSalary;

    scanf("%s", name);
    scanf("%lf", &fixedSalary);
    scanf("%lf", &salesTotal);


    totalSalary = fixedSalary + (salesTotal * 0.15);


    printf("TOTAL = R$ %.2lf\n", totalSalary);

    return 0;
}
