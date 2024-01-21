// Update a specific element in the array.

#include "stdio.h"

int main()
{
    int n, index, value;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Original Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }

    printf("\n");
    printf("Enter the index : ");
    scanf("%d", &index);

    printf("Enter the it's value : ");
    scanf("%d", &value);

    array[index] = value;

    printf("Updated Array\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
}
