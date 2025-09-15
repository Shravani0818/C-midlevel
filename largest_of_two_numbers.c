#include <stdio.h>
int main()
 {
    int number1, number2;

    printf("Enter first number : ");
    scanf("%d",&number1);
    printf("Enter second number : ");
    scanf("%d",&number2);
    if (number1 > number2)
     {
        printf("%d is the largest number ", number1);
    } 
    else if (number2 > number1) 
    {
        printf("%d is the largest number ", number2);
    } 
    else
     {
        printf("Both numbers are equal");
    }
    return 0;
}
