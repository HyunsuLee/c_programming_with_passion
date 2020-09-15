#include <stdio.h>

int main(void)
{
    int end = 0, num, iter = 0, sum = 0;
    double mean;

    printf("몇 개나 입력? ");
    scanf("%d", &end);

    while (iter<end)
    {
        printf("평균 낼 정수: ");
        scanf("%d", &num);
        sum = sum + num;
        iter++;
    }
    mean = (double)sum/end;

    printf("평균은: %f \n", mean);
    return 0;

}