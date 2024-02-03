// Find the index of a specific element in the array
#include "stdio.h"
int main()
{
    int n, j = 0, searchvalue, index, count = 0;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Array\n");

    int indexA[n];
    printf("Enter the value to search : ");
    scanf("%d", &searchvalue);

    printf("Values indices \n");
    for (int i = 0; i < n; i++)
    {
        if (array[i] == searchvalue)
        {
            index = i;
            printf("%d\n", index);
            // for (int j = 0; j < n; j++)
            // {
            //     indexA[j] = index;
            //     count++;
            //     continue;
            // }
            // while (j < n)
            // {
            //     indexA[j] = index;
            //     j++;
            //     count++;
            //     break;
            // }
        }
    }
    // printf("\ncount = %d\n", count);
    // for (int i = 0; i < count; i++)
    // {
    //     printf("indexA[%d] = %d\n", i, indexA[i]);
    // }
}