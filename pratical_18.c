#include <stdio.h>
int main()
{
    int rows, coloums;
    printf("enter the number of table you want to calculate \n");
    scanf("%d,%d",&rows,&coloums);

    for (int j = 1; j <= coloums; j++)
    {
        printf("%d  \t ", j*coloums);
    }

    for (int i = 1; i <= rows; i++)
    {
        printf("%d \n ", i*rows);
    }
    return 0;
}