#include <stdio.h>

int main(void)
{
    int num1 = 15; // 00001111
    int num2 = ~num1; // 11110000 의 "2의 보수", 2의 보수는 not 연산으로 bit 반전후 1 bit를 더하면 됨.
    //역으로 양수에 대한 not 연산의 결과는 음수로 바꾸고, -1을 더한 결과,
    // 음수에 대한 not 연산의 결과는 양수로 바꾸고, -1을 더한 결과. 
    printf("NOT 연산의 결과: %d \n", num2);
    return 0;
}