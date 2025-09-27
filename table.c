#include<stdio.h>
int main()
{
    int i , j;

    printf("enter the number of rows or number of table you want to print : \n");
    scanf("%d", &i);
     printf("enter the number of coloums or number of multiple you want to print : \n");
    scanf("%d", &j);
    if (i>0 && j>0)
    {
    for(int x =1;x<=j;x++) // j represents coloums of the table or shows the total multiplicity of the table //
    {
    for(int y=1;y<=i;y++)// i represents rows of table or number of table //
    {
    printf("%d \t",x*y);
    }
    printf("\n");
}
    }
else
{
    printf("invalid input");
}
    return 0;
}