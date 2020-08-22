#include <stdio.h>

int main(void)
{
    int num1, num2;
    int divided, remnant;

    printf("Two integer: ");
    scanf("%d %d", &num1, &num2);

    divided = num1 / num2;
    remnant = num1 % num2;

    printf("%d / %d의 몫 %d, 나머지 %d \n", num1, num2, divided, remnant);
    return 0;
}