#include "stdio.h"

int cube(int num)
{
    int cube;
    cube = num * num * num;
}

int main()

{
    int num = 5;
    printf("%d", cube(num));
}