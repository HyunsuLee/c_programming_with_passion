#include <stdio.h>

int SimpleFuncOne(void)
{
    int num=10; // SimpleFuncOne의 num 변수가 유효
    num++;
    printf("SimpleFuncOne num: %d \n", num);
    return 0; // SimpleFuncOne의 num의 유효한 마지막
}

int SimpleFuncTwo(void)
{
    int num1=20; //여기서부터 num1 유효
    int num2=30; //여기부터 num2 유효
    num1++, num2--;
    printf("num1 & num2: %d %d \n", num1, num2);
    return 0;
}

int main(void)
{
    int num=17; //여기는 main의 num이 유효
    SimpleFuncOne(); // 나오는 순간 SimpleFuncOne의 num은 소멸
    SimpleFuncTwo();
    printf("main num: %d \n", num);
    return 0; 
}