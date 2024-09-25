#include <stdio.h>
int main() {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    (number > 0) ? printf("Number is positive.\n") :
    (number == 0) ? printf("Number is zero.\n") :
    printf("Number is negative.\n");

    return 0;
}
