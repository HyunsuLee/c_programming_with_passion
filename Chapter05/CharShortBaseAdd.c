#include <stdio.h>

int main(void)
{
    char num1 = 1, num2 = 2, result1 = 0;
    short num3 = 300, num4 = 400, result2 = 0;

    printf("size of num1 & num2: %lu, %lu \n", sizeof(num1), sizeof(num2));
    printf("size of num3 & num4: %lu, %lu \n", sizeof(num3), sizeof(num4));

    printf("size of char add: %lu \n", sizeof(num1+num2)); //여기서는 자동으로 cpu가 int 자료형으로 연산함.
    printf("size of short add: %lu \n", sizeof(num3+num4)); //따라서 연산이 빈번한 자료형은 int로 지정하는게 좋다.

    result1 = num1 + num2;
    result2 = num3 + num4;
    printf("size of result1 & result2: %lu, %lu \n", sizeof(result1), sizeof(result2));
    return 0;
}