#include "stdio.h"

int main()
{
    int n1, n2, n3, n4;
    printf("Enter four numbers");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    n1 > n2
        ? n1 > n3
              ? n1 > n4
                    ? printf("%d is greatest", n1)
                    : printf("%d is greatest", n4)

          : n3 > n4
              ? printf("%d is the grestest", n3)
              : printf("%d is the grestest", n3)
        :
}