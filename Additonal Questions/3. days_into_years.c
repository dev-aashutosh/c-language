/*convert the number of days into year*/
#include "stdio.h"
int main()
{
    int days;
    printf("Enter Number of Days : ");
    scanf("%d", &days);

    printf("%d Number of Years\n", days / 365);
    days = days % 365;
    printf("%d Number of Months\n", days / 30);
    days = days % 30;
    printf("%d Number of Days\n", days);
}