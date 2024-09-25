#include <stdio.h>
int main() {
int marks;
printf("Enter your marks: ");
scanf("%d", &marks);
if (marks >= 90) {
    if (marks >= 95) {
        printf("Grade: A+");}
    else {
        printf("Grade: A");}}
else if (marks >= 80) {
    if (marks >= 85) {
        printf("Grade: B+");}
    else {
        printf("Grade: B");}}
else {
    printf("Grade: C or lower");}
return 0;
}