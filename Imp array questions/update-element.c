// Update multiple elements in the array simultaneously
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int nmax;
    printf("Enter the number of elements to update: ");
    scanf("%d", &nmax);

    printf("Enter the indices and new values to update:\n");
    for (int i = 0; i < nmax; i++)
    {
        int index, newval;
        printf("Index %d: ", i + 1);
        scanf("%d", &index);
        printf("New value: ");
        scanf("%d", &newval);

        if (index >= 0 && index < n)
        {
            array[index] = newval;
        }
        else
        {
            printf("Invalid index\n");
        }
    }

    printf("Updated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
