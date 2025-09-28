#include<stdio.h>
void main ()
{
    int temperature;

    printf("Enter temperature in celsius : ");
    scanf("%d",&temperature);

    if(temperature >35)
    {
printf("Temperature is hot \n");
    }
else if (temperature <35)
{
printf("Temperature is cold \n");
    }
    else
    {
    printf("Temperature is normal \n");
}
}



