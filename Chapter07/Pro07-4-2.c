#include <stdio.h>

int main(void)
{
    int num, i, fact = 1;

    printf("정수 입력 : ");
    scanf("%d", &num);

    for (i = 1; i < num+1; i++)
    {
        fact *= i;
    }
    printf("%d! = %d", num, fact);
    return 0;
}