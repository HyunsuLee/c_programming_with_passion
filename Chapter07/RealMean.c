#include <stdio.h>

int main(void)
{
    double total = 0.0;
    double input = 0.0;
    int num = 0;

    for( ; input >= 0.0; )
    {
        total += input;
        printf("실수 입력(minus to quit) : ");
        scanf("%lf", &input);
        num++; //위의 증감식 부분에 들어가도 무방하다.
    }
    printf("평균: %f \n", total/(num-1)); // 종료를 위해 음의 실수 입력하고 num이 하나 증가하므로.
    return 0;
    
}