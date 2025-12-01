#include <stdio.h>

int main()  
{
    int sensor[4] = {40, 60, 80, 120};   
    int *ptr = sensor;
    int i;

    printf("Sensor Reading Analysis:\n\n");

    for(int i = 0; i < 4; i++)
{
        int reading = *(ptr + i);        
        int square = reading * reading;  

        printf("Sensor %d:\n", i + 1);

        printf("  Original Reading  : %d\n", reading);

        printf("  Squared Value     : %d\n", square);

        if(square > 5000) 
{
            printf("  Status           : High Power Alert!\n");
        } else
{
            printf("  Status           : Normal Power Level\n");
        }

      
    }

    return 0;
}      
