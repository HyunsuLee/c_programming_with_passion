#include <stdio.h>

int main(void)
{
    int end, num = 0;

    printf("양의 정수: ");
    scanf("%d", &end);

    while (num < end) // while(num++<end)도 가능 num++가 후위연산이기때문.
    {
        printf("%d ", 3*(num+1));
        num++;
    }
    printf("\n");
    return 0;
}