#include <stdio.h>

int main(void)
{
    int num, sum = 0, iter = 0;

    while (iter < 5)
    {
        printf("정수 입력: ");
        scanf("%d", &num);
        while(num < 1)
        {
            printf("재입력: ");
            scanf("%d", &num);
        }
        sum = sum +num;
        iter++;
    }
    printf("합: %d \n", sum);
    return 0;
    
}