#include<stdio.h>

int main()
 {
    int speed;

    printf("Enter vehicle speed : ");
    scanf("%d", &speed);

    if (speed <= 30) 
    {
        printf("Speed is within limit. !\n");
    }
    else if (speed <= 80)
     {
        printf("Warning! slow down \n");
    }
    else 
    {
        printf("Speed limit exceeded \n");
    }

    return 0;
}
