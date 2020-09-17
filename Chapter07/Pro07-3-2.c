#include <stdio.h>

int main(void)
{
    int even = 0, sum = 0;

    do
    {
        sum += even;
        even += 2;
    } while (even < 101);
    printf("100이하 정수 합: %d", sum);
    return 0;
}