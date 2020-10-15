#include <stdio.h>

int main(void)
{
    int num1, num2;
    int results;

    printf("두개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    results = num1>num2 ? num1 - num2 : num2 - num1;

    printf("두 수의 차: %d \n", results);
    return 0;
}

/* 문제4의 내용이 이 프로그램을 조건연산자를 이용하는 것으로 변형시키는 것.
그런데, 난 처음부터 조건연산자를 사용했기때문에 그대로 둔다. 물론 if else문으로 해결할 수도 있다. */