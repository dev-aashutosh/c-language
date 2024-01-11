#include "stdio.h"
int main()
{
    int from;
    printf("Enter starting value : ");
    scanf("%d", &from);

    while (from >= 0)
    {
        if ((from % 2) != 0)
        {
            printf("%d\n", from);
        }

        from = from - 1;
    }
}