// Find  the min and max elements in an array
#include "stdio.h"

int main()
{
    int max, min, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("\nOriginal array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("\nMax: %d\n", max);
    printf("Min: %d\n", min);
}
