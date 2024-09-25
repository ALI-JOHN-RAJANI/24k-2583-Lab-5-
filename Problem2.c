#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive");
        if (number % 2 == 0) {
            printf("The number is even");
        } else {
            printf("The number is odd");
        }
    } else if (number < 0) {
        printf("The number is negative");
    } else {
        printf("The number is zero");
    }

    return 0;
}
