#include <stdio.h>
// function//
void printindian();
void printfrench();

int main()
{

    printf("Enter your nationality : i for indian amd f for french ");
    char nationality;
    scanf("%c", &nationality);

    if (nationality == 'i')
    {
        printf("Namaste");
    }
    else if (nationality == 'f')
    {
        printf("bonjour");
    }
    return 0;
}

// function print//
void printindian()
{
    printf("Namaste  \n");
}
void printfrench()
{
    printf("Bonjour \n");
}
