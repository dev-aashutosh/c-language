// Write a Program to find the cube of a given number using UDF.
#include <stdio.h>

int divisibility(int num)
{
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("Yes, it is divisible by both");
    }
    else
    {
        printf("Not, it is not divisible by both");
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    divisibility(num);
}
