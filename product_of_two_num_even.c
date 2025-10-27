#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the number : ",a,b);
    scanf("%d%d", &a, &b);
    if ((a * b) % 2 == 0)
        printf("Product is even");
    else
        printf("Product is odd");
    return 0;
}
