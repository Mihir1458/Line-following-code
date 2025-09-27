#include<stdio.h>

int main()

{
    int i;
    printf("Enter any number :");
    scanf("%d", i);
    int sum;
    sum=0;

    for(int n=0 ; n<=i ; n++){
        sum= sum+i;
        printf("%d", sum);
    }
    return 0;
    

}