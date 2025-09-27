#include<stdio.h>

int main()
{
float t1, kelvin , celcius , farenheit ;

    printf("enter the value of the temperature of weather in celcius \n  ");
    scanf("%f",&t1);

    kelvin=(273.5+t1);
    printf("temperature of weather in kelvin is %f ",  kelvin);
    return 0;

}