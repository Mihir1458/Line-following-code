#include<stdio.h>
int main()
{
       int i , n;
    printf("Enter the number : \n");
    scanf("%d", &i);

    for(n=2 ; n<=i ; n++)
    {
        if(i%n==0)
        printf("Above number is not prime number \n" );
       
        else
        printf("Above number is prime number \n");
    }
    return 0;
}