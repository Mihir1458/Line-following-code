#include<stdio.h>
//function//
void printHello();
void printWelcome();

    //function call//
    int main()
    {
    printHello();
    printWelcome();
    printHello();
    return 0;
    }
//function defination//
void printHello()
{
    printf("Hello world \n\n");
}
void printWelcome()
{
    printf("WELCOME \n\n");
}