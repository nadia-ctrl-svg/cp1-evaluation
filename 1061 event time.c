
#include <stdio.h>

int main() {
    int d1, d2, h1, m1, s1, h2, m2, s2;
    int days, hours, minutes, seconds;
    char temp[5];

    scanf("%s %d", temp, &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%s %d", temp, &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    int start = s1 + m1 * 60 + h1 * 3600 + d1 * 86400;
    int end = s2 + m2 * 60 + h2 * 3600 + d2 * 86400;

    int total = end - start;

    days = total / 86400;
    total %= 86400;
    hours = total / 3600;
    total %= 3600;
    minutes = total / 60;
    seconds = total % 60;

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}
