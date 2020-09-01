#include <stdio.h>

int main(void)
{
    int num = 15; //00001111

    int result1 = num << 1; // num의 비트열을 왼쪽으로 1칸씩 이동, 00011110
    int result2 = num << 2; // num의 비트열을 왼쪽으로 2칸씩 이동, 00111100
    int result3 = num << 3; // num의 비트열을 왼쪽으로 3칸씩 이동, 01111000

    printf("1칸 이동 결과: %d \n", result1);
    printf("2칸 이동 결과: %d \n", result2);
    printf("3칸 이동 결과: %d \n", result3);
    return 0;
}

/*
결과에 대한 고찰
- 비트 열을 왼쪽으로 1칸씩 이동하면 정수 값이 2배가 된다. 
- 물론 실수는 2진수로 표기되지 않으므로 이렇게 연산되지 않는다.
- 오른쪽으로 1칸씩 이동하면 정수 값이 2로 나누어질 것. 
*/
