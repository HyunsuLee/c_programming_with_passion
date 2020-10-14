#include <stdio.h>

int main(void)
{
    int opt;
    double num1, num2;
    double result;

    printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
    printf("선택? ");
    scanf("%d", &opt);
    /* 
        주의할 점. opt을 실수로 입력 하면, 예를 들어 1.2같은 걸 입력하면 opt에는 1이 저장된다.
        하지만 남는 소수점 부분 0.2는 다음 scanf문인 실수 입력으로 넘어가서 num1에 저장된다.
        다음 scanf문에서 두 개의 실수를 입력하면 첫번째 입력한 실수가 num2에 저장되고, 이후 실수값은
        버려진다. 그래서 result값은 num1과 num2를 연산하는 것이 아니라, opt의 소수점 부분과 
        num1를 연산한 값으로 저장된다. 주의할 것. 
    */
    

    if(0 < opt && opt < 5) //예외처리를 위해 추가함. 책에는 없음. 
    {
        printf("두 개의 실수 입력: ");
        scanf("%lf %lf", &num1, &num2);
        
        if(opt == 1)
            result = num1 + num2;
        else if(opt == 2)
            result = num1 - num2;
        else if(opt == 3)
            result = num1 * num2;
        else
            result = num1 / num2;

        printf("결과: %f \n", result);
    }
    else
    {
        printf("옵션이 존재하지 않습니다. \n");
    }
    
    return 0;
    
}