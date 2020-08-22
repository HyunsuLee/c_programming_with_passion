#include <stdio.h>

int main(void)
{
    int result1;
    int num1, num2;

    printf("정수 one: ");
    scanf("%d", &num1); // wait for first integer, be cautious "&" ahead of variable name
    printf("정수 two: ");
    scanf("%d", &num2);

    result1 = num1 + num2;
    printf("%d + %d = %d \n", num1, num2, result1);
    return 0;

}