#include<stdio.h>

int main()
{
    int a , b;
    printf("Enter a number : \n");
    scanf("%d",&a);
    b=a%2;
    if (b>0)
    {
        printf("above number is not divisible by 2");

    }
    else
    {
        printf("above number is divisible by 2");
              
    }
      return 0; 
}