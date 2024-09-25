#include <stdio.h>

int main() {
    int age;
    int citizenship;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Are you a citizen? (1 for yes/0 for no): ");
    scanf("%d", &citizenship);

    if (age >= 18 && citizenship == 1) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
