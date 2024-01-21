// Update multiple elements in the array simultaneously
#include "stdio.h"
int main()
{
    int n, nmax;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the no. of elements to updated : ");
    scanf("%d", &nmax);

    printf("Enter the elements : ");
    for (int i = 0; i < nmax; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < nmax; i++)
    {
        printf("%d\t", array[i]);
    }
}