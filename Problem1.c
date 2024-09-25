#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age");
    } else {
        if (age <= 12) {
            printf("You are categorized as: Child");
        } else {
            if (age <= 19) {
                printf("You are categorized as: Teenager");
            } else {
                if (age <= 64) {
                    printf("You are categorized as: Adult");
                } else {
                    printf("You are categorized as: Senior");
                }
            }
        }
    }

    return 0;
}
