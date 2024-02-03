// Find the index of a specific element in the array
#include <stdio.h>

int main()
{
    int n, searchvalue, count = 0;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &searchvalue);

    printf("Values indices: \n");
    for (int i = 0; i < n; i++)
    {
        if (array[i] == searchvalue)
        {
            printf("%d\n", i);
            count++;
        }
    }

    printf("\nTotal Numbers = %d\n", count);
}
