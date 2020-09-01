// Pro04-4.c

#include <stdio.h>

int main(void)
{
    int num_to_reverse_sign;
    int reversed_sign;
    
    int num = 3;
    int result1, result2;

    printf("부호를 바꿀 정수 값: ");
    scanf("%d", &num_to_reverse_sign);
    reversed_sign = ~num_to_reverse_sign + 1;
    printf("부호바뀐 정수값: %d \n", reversed_sign);
    //이 위까지가 문제 1

    result1 = num<<3;
    result2 = result1>>2;
    printf("3X8/4 = %d \n",result2);
    //이 위까지가 문제 2

    return 0;
}
