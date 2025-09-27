#include<stdio.h>

int main()

{
    char value ;

    printf("enter a character \n");
    scanf("%c" , &value);

    if('A'<=value && value<='z')
    {
    printf("above entered value is a character");
    }
    else
    {
        printf("above entered value is not character");
    }
    return 0;

}