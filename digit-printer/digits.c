#include <stdio.h>

int main(void)
{
    // Keep the input as text so numbers larger than integer types can be read. */
    // The extra space lets us detect input that exceeds the 100-digit limit. */
    char number[102];

    printf("Enter a positive integer (up to 100 digits): ");
    // Read at most 101 characters, leaving room for the string terminator. */
    if (scanf("%101s", number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int length = 0;
    while (number[length] != '\0') {
        if (number[length] < '0' || number[length] > '9') {
            printf("Please enter digits only.\n");
            return 1;
        }
        length++;
    }

    if (length > 100) {
        printf("Please enter no more than 100 digits.\n");
        return 1;
    }

    // Print each digit character in its original left-to-right order. */
    for (int i = 0; i < length; i++) {
        printf("%c ", number[i]);
    }

    printf("\n");
    return 0;
}
