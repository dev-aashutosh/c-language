#include "stdio.h"
int main()
{
    int num, count = 0;
    printf("enter any number ");
    scanf("%d", &num);

    for (int i = 0; num != 0; i++)
    {
        num = num / 10;
        count++;
    }
    printf("%d", count);
}