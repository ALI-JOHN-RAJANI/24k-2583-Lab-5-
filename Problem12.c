#include <stdio.h>

int main() {
    int attendance;
    float assignments, exam, finalGrade;

    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);
    printf("Enter assignment score: ");
    scanf("%f", &assignments);
    printf("Enter exam score: ");
    scanf("%f", &exam);

    if (attendance >= 75) {
        if (assignments >= 50) {
            if (exam >= 50) {
                finalGrade = (assignments + exam) / 2;
                printf("Final grade: %.2f\n", finalGrade);
            } else {
                printf("Fail due to exam score.\n");
            }
        } else {
            printf("Fail due to assignments score.\n");
        }
    } else {
        printf("Fail due to attendance.\n");
    }

    return 0;
}
