#include<stdio.h>
int main()
{
    int i , multi;
    printf("Enter number yo print it's reverse table");
    scanf("%d", &i);

    for(int n = i ; n>=1 ; n-- )
    {
        multi=1;
    multi= multi*n*i;
    printf("%d \n" , multi);
}
return 0;
}