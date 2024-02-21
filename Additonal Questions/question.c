/*write a program which asks the user to enter an even number,computer
will give the user at most 3 chances,if user fails to answer in any
of the chances "GAME OVER" should be displayed otherwise "you won"
should be displayed*/

#include "stdio.h"
int main()
{
    int n;

    for (int i = 1; i < 4; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            printf("YOU WON");
            break;
        }
        else
        {
            if (i < 3)
            {
                printf("\nYOU HAVE %d CHANCES LEFT\n", 3 - i);
            }
            else
            {
                printf("YOU LOSE");
            }
        }
    }
}