#include<stdio.h>
void main ()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("you are eligible for driving license");
        
    }
    else
    {
    printf("you are not eligible for driving license");
    }
}