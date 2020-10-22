#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    num1 = printf("12345 \n"); // 문자열의 길이를 반환함. \n는 1byte.
    num2 = printf("I love my home. \n");
    num3 = printf("나는 사랑한다.\n"); //맥에서는 한글 한 글자가 3byte임.
    printf("%d %d %d \n", num1, num2, num3);
    return 0;
}