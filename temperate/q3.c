#include "stdio.h"
int main()
{
    int num, lastnum;
    printf("enter any number ");
    scanf("%d", &num);
    lastnum = num % 10;

    for (int i = 0; num > 10; i++)
    {
        num = num / 10;
    }
    printf("%d", num + lastnum);
}