#include <stdio.h>

int main(void)
{
    /* 이 문제의 답은 해답을 보고 알았음. 
    내가 생각했던 답은 1. case를 0,1,2,3,~여러개 쓴다.
    이건 너무 지저분한 방법이라 폐기.
    2. if나 조건 연산자를 통해 범위를 통괄하는 값을 받고 그걸 switch case에 넣는다.
    하지만 이 방법은 순수 switch case로 해결한 것이 아니라 폐기. 답은 다음과 같다. */

    int num;
    printf("양의 정수 값 입력: ");
    scanf("%d", &num);

    switch (num/10)
    {
    case 0:
        printf("0이상 10미만 \n");
        break;
    case 1:
        printf("10이상 20미만 \n");
        break;
    case 2:
        printf("20이상 30미만 \n");
        break;
    default:
        printf("30이상 \n");
        break;
    }
    return 0;
}