#include <stdio.h>

int main(void)
{
    int num1 = 15; // 00001111
    int num2 = 20; // 00010100
    int num3 = num1 | num2; // num1과 num2의 bit 단위 OR 연산. 00011111 -> 31
    printf("OR 연산의 결과: %d \n", num3);
    return 0;
}