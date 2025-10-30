#include <stdio.h>
#include <ctype.h> // for toupper()

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str); // note: gets() is unsafe, but simple for beginner programs

    for(i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]); // convert each char to uppercase
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
