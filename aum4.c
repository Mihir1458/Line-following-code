#include<stdio.h>

int main()

{
    float num1 , num2 , num3 , avg ;
    printf("enter the value = \n");
    scanf("%f" , &num1);
    printf("enter the value = \n");
    scanf("%f" , &num2 );
    printf("enter the value = \n");
    scanf("%f" , &num3);

    avg=(num1+num2+num3)/3;

    printf("average of above three number is %f " , avg);

return 0;

}