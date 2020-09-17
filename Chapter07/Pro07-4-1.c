#include <stdio.h>

int main(void)
{
    int num1, num2, sum = 0;
    int i;

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    for (i = num1; i < num2 + 1; i++)
    {
        sum += i;
    }
    
    printf("%d와 %d 사이의 정수합은 %d이다. \n", num1, num2, sum);
    return 0;

}