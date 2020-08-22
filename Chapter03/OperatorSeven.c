#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num2 = 12;
    int result1, result2, result3;

    result1 = (num1 == 10 && num2 == 12); // AND operator
    result2 = (num1 < 12 || num2 > 12); // OR operator
    result3 = (!num1); //NOT operator

    printf("result1: %d \n", result1);
    printf("result2: %d \n", result2);
    printf("result3: %d \n", result3);
    return 0;    
}