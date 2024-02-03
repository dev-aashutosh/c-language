// Create an array of integers and find the sum of all the elements in the array
#include "stdio.h"
int main()
{
    int n, sum = 0;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] : %d\n", i, array[i]);
    }
    printf("Sum : %d", sum);
}