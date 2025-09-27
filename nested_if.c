#include<stdio.h>

int main()

{
    int marks;

    printf("Enter your marks : \n");
    scanf("%d", &marks);

    if(marks>30){
    {
    printf("Student passed ");
    }
    if (marks>=90 && marks<=100)
    printf("above student passes with A+ grade");
    if(marks>80 && marks<90)
    printf("Above stucent passed with A grade");
    if(70<marks && marks<80)
    printf("Above student passes with B+ grade");
     if(60<marks && marks<70)
    printf("Above student passes with B grade");
     if(50<marks && marks<60)
    printf("Above student passes with C+ grade");
     if(40<marks && marks<50)
    printf("Above student passes with C grade");
    if(30<marks && marks<40)
    printf("Above student passes with D+ grade");
}
    

    else
    {printf("Try again next time");}
    
    return 0;
}
  

    



