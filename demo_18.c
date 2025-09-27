#include<stdio.h>
int main()
{
    int table , multiple;
    printf("Enter the number of Table you want to print ");
    scanf("%d,%d",&table,&multiple);

    int x;
    printf("no of multiple you want to calculate \n");
    scanf("%d",&x);
    

    for(int i = 1 ; i <= x ; i++ )
    {int k=table*i;
        printf(" %d\n",k);
    }

    for(int j= 1 ; j<= x ; j++ )
    {
       
    }
return 0;
}