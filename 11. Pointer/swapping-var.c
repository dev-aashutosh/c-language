// Write a Program to swap two variables using Pointers.
#include "stdio.h"
int main()
{
    int x, y;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);

    int *pointer;
    pointer = &x;
    int temp = *pointer;
    *pointer = y;
    y = temp;

    printf("x : %d\n", x);
    printf("y : %d", y);
}
