#include <stdio.h>

int main(void)
{
    double a, b;

    printf("두개의 실수를 입력해주세요.");
    scanf("%lf %lf", &a, &b);

    printf("%f + %f = %f \n", a, b, a+b);
    printf("%f - %f = %f \n", a, b, a-b);
    printf("%f * %f = %f \n", a, b, a*b);
    printf("%f / %f = %f \n", a, b, a/b);
    return 0;
}