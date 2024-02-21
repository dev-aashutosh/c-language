/*
take values from the user and add until the user enters 0
*/

#include "stdio.h"
int main()
{
    int num, sum = 0; // temp = 1

    while (1)
    {
        printf("Enter a Number : ");
        scanf("%d", &num);
        if (num != 0)
        {
            sum += num;
        }
        else
        {
            // temp = 0;
            break;
        }
    }
    printf("Sum %d", sum);
}