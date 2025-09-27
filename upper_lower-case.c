#include<stdio.h>

int main()

{
    char lower , upper , value;
    printf("enter a character \n");
    scanf("%c" , &value);

    if ('a'<=value  && value<='z')
    printf("Above entered character is LOWER case");

    else if ('A'<= value  && value <='Z')
    printf("Above entered number is UPPER case");

    else
    {
        printf("above input is invalid");
    }
return 0;
}