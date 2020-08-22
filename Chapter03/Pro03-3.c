#include <stdio.h>

int main(void)
{
    int num1;
    int result;

    printf("One integer: ");
    scanf("%d", &num1);

    result = num1 * num1;

    printf("%d ^ 2 = %d \n", num1, result);
    return 0;

}