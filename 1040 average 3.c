
#include <stdio.h>

int main() {
    float N1, N2, N3, N4, exam, average, final_average;

    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    printf("Media: %.1f\n", average);

    if (average >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (average < 5.0) {
        printf("Aluno reprovado.\n");
    } else {

        printf("Aluno em exame.\n");

        scanf("%f", &exam);
        printf("Nota do exame: %.1f\n", exam);

        final_average = (average + exam) / 2;


        if (final_average >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }


        printf("Media final: %.1f\n", final_average);
    }

    return 0;
}
