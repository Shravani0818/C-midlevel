#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n >= -9 && n <= 9)
        printf("Single-digit number");
    else
        printf("Not single-digit");
    return 0;
}
