#include "stdio.h"
int main()
{
    int i, num;
    printf("enter the number : ");
    scanf("%d", &num);
    for (i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
}