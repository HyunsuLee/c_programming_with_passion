#include <stdio.h>

int main(void)
{
    int num1 = 3, num2 = 4;
    double divResult1;
    double divResult2;
    divResult1 = num1 / num2; //연산과정 중에는 int로 연산이 일어나고, double에 저장되면서 손실이 일어남.
    divResult2 = (double)num1 / num2; //명시적으로 자료형을 변환후 연산함.
    printf("손실되는 나눗셈 결과: %f \n", divResult1);
    printf("자료형 변환후 나눗셈 결과 : %f \n", divResult2);
    return 0;
}