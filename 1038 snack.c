
#include <stdio.h>

int main() {
    int code, quantity;
    float price, total;

    scanf("%d %d", &code, &quantity);

    if (code == 1) {
        price = 4.00;
    } else if (code == 2) {
        price = 4.50;
    } else if (code == 3) {
        price = 5.00;
    } else if (code == 4) {
        price = 2.00;
    } else if (code == 5) {
        price = 1.50;
    } else {
        price = 0.00;
    }

    total = price * quantity;

    printf("Total: R$ %.2f\n", total);

    return 0;
}
