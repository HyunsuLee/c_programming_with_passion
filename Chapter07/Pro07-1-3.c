#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;

    while(num != 0)
    {
        printf("정수 입력(0이면 멈춤): ");
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("그 동안의 합: %d \n", sum);
    return 0;
}