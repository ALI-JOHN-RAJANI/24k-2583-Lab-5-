#include <stdio.h>

int main() {
    int age;
    float income;
    int creditScore;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter income: ");
    scanf("%f", &income);
    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    if (age >= 18 && income >= 30000 && creditScore >= 650) {
        printf("Eligible for a loan.\n");
    } else {
        printf("Not eligible for a loan.\n");
    }

    return 0;
}
