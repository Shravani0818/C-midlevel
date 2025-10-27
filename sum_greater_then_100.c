#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the number : ");
    scanf("%d%d", &a, &b);
    if (a + b > 100)
        printf("Sum is greater than 100");
    else
        printf("Sum is not greater than 100");
    return 0;
}
