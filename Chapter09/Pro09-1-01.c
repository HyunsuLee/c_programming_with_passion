#include <stdio.h>

int GetLargerValue(int num1, int num2, int num3)
{
    int result;
    result = num1>num2 ? num1 : num2;
    result = num3>result ? num3 : result;
    return result;
}

int GetSmallValue(int num1, int num2, int num3)
{
    int result;
    result = num1<num2 ? num1 : num2;
    result = num3<result ? num3 : result;
    return result;
}

int main(void)
{
    int num1, num2, num3;
    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("가장 작은 정수는 %d입니다. \n", GetSmallValue(num1, num2, num3));
    printf("가장 큰 정수는 %d입니다. \n", GetLargerValue(num1, num2, num3));
    return 0;

}