#include <stdio.h>
int main() {
int age, license;
printf("Enter Your Age: ");
scanf("%d", &age);
printf("Enter 1 if you have license else 0: ");
scanf("%d", &license);
if (age >= 18 && license==1) {
printf("You are eligible to drive.\n");
} else {
printf("You are not eligible to drive.\n");
}
return 0;
}