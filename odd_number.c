#include<stdio.h>
int main()
{
int n;
do{
    printf("Enter any number \n" );
    scanf("%d", &n);
    printf("%d \n", n);

    if( n % 7 == 0){
        break;
    }
}
while(1);
printf("end");
return 0;
}