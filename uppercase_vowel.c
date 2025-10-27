#include <stdio.h>
int main() {
    char ch;
    printf("Enter the vowel : ");
    scanf(" %c", &ch);
    if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Uppercase vowel");
    else
        printf("Not Uppercase vowel");
    return 0;
}
