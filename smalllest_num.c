#include<stdio.h>

int main()

{
    float num1 , num2 , num3 , smallestnum ;
    printf("enter the value = \n");
    scanf("%f" , &num1);
    printf("enter the value = \n");
    scanf("%f" , &num2 );
    printf("enter the value = \n");
    scanf("%f" , &num3);

    if (num1>num2 && num2<num3 )
    {
    printf("number 2 is the smallest value");
    }

     if (num1>num3 && num3<num2 )
    {
    printf("number 3 is the smallest value");
    }

    if (num2>num1 && num1<num3 )
    {
    printf("number 1 is the smallest value");
    }

return 0;
}