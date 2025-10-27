#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    printf("%d\n", N);

    for (int i = 0; i < 7; i++) {

        int count = N / notes[i];

        printf("%d nota(s) de R$ %d,00\n", count, notes[i]);

        N %= notes[i];
    }

    return 0;
}
