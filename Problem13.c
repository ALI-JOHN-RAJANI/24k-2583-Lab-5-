#include <stdio.h>
int main() {
    char ch, encrypted, decrypted;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    encrypted = ch ^ 0xFF;
    printf("Encrypted character: %c\n", encrypted);
    decrypted = encrypted ^ 0xFF;
    printf("Decrypted character: %c\n", decrypted);
    return 0;
}
