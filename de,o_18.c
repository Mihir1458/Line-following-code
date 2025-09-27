#include<stdio.h>
int main()
{
    int table , multiple;
    printf("Enter the number of Table you want to print ");
    scanf("%d,%d",&table,&multiple);

    int x;
    printf("no of multiple you want to calculate \n");
    scanf("%d",&x);
    int k=table*x;
    int m=multiple*x;

    for(int i = 1*table ; i <= k ; i++ )
    {
        printf("%d\n",k);
    }
    printf("");

    for(int j= 1*multiple ; j<= m ; j++ )
    {
        printf("%d\n",m);
    }
    return 0;
}