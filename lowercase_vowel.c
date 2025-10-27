#include <stdio.h>
int main()
{
    char ch;
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("Lowercase vowel");
    else
        printf("Not lowercase vowel");
    return 0;
}
