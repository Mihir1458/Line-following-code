#include<stdio.h>
int main()
{
    int s;
    s=0;
    printf("Enter the number of seconds you want to countdown \n");
    scanf("%d" , &s);

    if(s<0)
    {
        printf("Above input is INVALID");
    }
    else
    {

    for(int x=s ; x>=0 ; x--)
    {
        printf("%d seconds left \n", x);
       sleep(1);
    }
    printf("Count down is completed");
}
}