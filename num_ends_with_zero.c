#include <stdio.h>
int main()
{
    int n;
    printf("enter the number : ")
    scanf("%d", &n);
    if (n % 10 == 0)
        printf("Ends with zero");
    else
        printf("Does not end with zero");
    return 0;
}
