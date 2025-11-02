#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, upper = 0, lower = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))
            upper++;
        else if (islower(str[i]))
            lower++;
    }

    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    return 0;
}
