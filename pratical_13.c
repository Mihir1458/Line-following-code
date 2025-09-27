#include<stdio.h>
int main()
{
    int x;
printf("Enter the number of liter in tens that you want to fill in tank \n");
scanf("%d", &x);

for(int s=0 ; s<=x ; s++)
{
    int liter;
    liter=s*10;
    printf("Current Water Level : %d liters \n", liter);
}
printf("Tank is Full ");
}