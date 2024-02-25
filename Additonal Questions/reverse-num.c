#include "stdio.h"
int main()
{
    int num, remainder, reverse;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        num = num / 10;
        reverse = reverse * 10 + remainder;
    }

    printf("%d", reverse);
}