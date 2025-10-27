#include <stdio.h>

int main() {

   int d;
   scanf("%d", &d);
   printf("%d minutos\n", (int)(((double)d / 30.0) * 60));

    return 0;
}
