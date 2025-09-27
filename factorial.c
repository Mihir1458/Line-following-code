#include<stdio.h>
int main()
{
    int i ;
    printf("Enter a number \n");
    scanf("%d \n", &i );


    int fact=1;
    for(int n=1 ; n<=i ; n++)
    {
       fact=fact*n;
    }
        printf("final factorial is %d", fact);
    return 0; 
}