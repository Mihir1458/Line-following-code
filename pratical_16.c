#include <stdio.h>
int main()
{
    int user, total_sticks;
    user = 0;
    total_sticks = 0;
repeat:
    if (total_sticks < 21)
    {
        printf("Enter the number of match stick user want to pick up between  1 to 4\n");
        scanf("%d", &user);
        if (user > 4)
        {
            printf("INVALID INPUT");
            goto repeat;
        }

        else if (user <= 4)
        {
            int computer;
            computer = 5 - user;
            printf("computer picks %d \n\n", computer);

            total_sticks = computer + user + total_sticks;
        }
        if (total_sticks == 20)
        {
            printf("1 stick is left to be picked therefore computer Wins");
            return 0;
        }
    }
    goto repeat;
}