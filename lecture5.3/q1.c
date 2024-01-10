#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The minimum of the three numbers is: %d\n",
           (num1 > num2) ? ((num2 > num3) ? num3 : num2) : num1);
    return 0;
}
