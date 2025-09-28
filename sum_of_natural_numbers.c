#include <stdio.h>

int main()
 {
    int  sum = 0, i;
 
    for(i = 0; i <= 10; i++) 
    {
        sum = sum +i;  
    }

    printf("Sum of  %d natural numbers = %d\n", sum);

    return 0;
}
