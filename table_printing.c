#include<stdio.h>

int main()

{
    int i;
    printf("enter the number till which you want multiplication \n");
    scanf("%d" , &i);
printf("----------------------------------------------------------------------------------------------------------------------------------------\n");
    for( int n=1 ; n<=10 ; n++){
    printf("%d \n" , n*i );
    }
    return 0;

}