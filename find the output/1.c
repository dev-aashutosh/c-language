// find the output of the given program
#include "stdio.h"
int main()
{
    int i, j, k;
    for (int i = 0; i < 3; i++)
    {
        j = i * 2 + 1;
        k = j * 3 - 2;
    }
    printf("%d%d%d", i, j, k);
}
// answer : 3,5,13