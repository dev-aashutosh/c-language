// with the help of array
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    int array[n];
    array[0] = 0;
    array[1] = 1;

    for (int i = 2; i < n; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

/*ALTERNATIVE WAYS*/

// #include "stdio.h"
// int main()
// {
//     int i = 0, n, n0 = 0, n1 = 1, next;

//     printf("enter nth term : ");
//     scanf("%d", &n);

//     while (i < n)
//     {
//         if (i <= 1)
//         {
//             printf("%d ", i);
//         }
//         else
//         {
//             next = n0 + n1;
//             n0 = n1;
//             n1 = next;
//             printf("%d\n", next);
//         }
//         i++;
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int n, i = 2;

//     printf("Enter the number of terms for Fibonacci series: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series:\n");

//     if (n >= 1)
//     {
//         printf("0 ");
//     }
//     if (n >= 2)
//     {
//         printf("1 ");
//     }

//     int first = 0, second = 1, next;

//     while (i < n)
//     {
//         next = first + second;
//         printf("%d ", next);

//         first = second;
//         second = next;

//         i++;
//     }

//     return 0;
// }
