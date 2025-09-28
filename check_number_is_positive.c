#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Positive number.\n");
    }
    else
    {
        printf("number is not positive");
    }

    return 0;
}
