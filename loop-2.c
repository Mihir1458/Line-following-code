#include<stdio.h>

int main()
{int i=0;
    printf("Enter a number \n");
    scanf("%d", &i);

    int sum;
    sum=0;
    for(int n=i ; n>=0 ; n--) {
        sum=(sum+n);
    printf("%d \n", n);}
        printf("sum is %d", sum);

    
return 0;

}