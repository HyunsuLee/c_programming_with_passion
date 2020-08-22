#include <stdio.h>

int main(void)
{
    int num1, num2;
    int substraction, multiply;

    printf("Two integer input: ");
    scanf("%d %d", &num1, &num2);

    substraction = num1 - num2;
    multiply = num1 * num2;

    printf("%d - %d = %d \n", num1, num2, substraction);
    printf("%d x %d = %d \n", num1, num2, multiply);
    return 0;
}