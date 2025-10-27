#include <stdio.h>

int main() {

   int time, speed;
   scanf("%d %d", &time, &speed);
   double fuel_spent = (double)(time * speed) / 12.0;
   printf("%.3lf\n", fuel_spent);


    return 0;
}
