#include <stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    if (n % 4 == 0 && n % 8 == 0)
        printf("Divisible by 4 and 8");
    else
        printf("Not divisible by both");
    return 0;
}
