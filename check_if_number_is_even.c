#include <stdio.h>

int main() 
{
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
     {
        printf("%d is an Even number", number);
    } 
    else 
    {
        printf("%d is NOT an Even number", number);
    }

    return 0;
}
