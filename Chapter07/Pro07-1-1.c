#include <stdio.h>

int main(void)
{
    int end, iter = 0;
    printf("양의 정수: ");
    scanf("%d", &end);

    while (iter<end)
    {
        printf("Hello world! %d \n", iter + 1);
        iter++;
    }
    return 0;
}