#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    
    ch = tolower(ch);

    printf("Lowercase: %c\n", ch);

    return 0;
}
