#include <stdio.h>

int main()
{
    int ys, ye, n = 0;
    printf("Enter the starting year : ");
    scanf("%d", &ys);

    printf("Enter the ending year : ");
    scanf("%d", &ye);

    int array[100];

    for (int i = ys; i <= ye; i++)
    {
        if (i % 4 == 0)
        {
            array[n++] = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}
