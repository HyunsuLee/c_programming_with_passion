#include <stdio.h>

int main(void)
{
    int num1 = 12;
    int num2 = 12;

    printf("num1: %d \n", num1);
    printf("num1++: %d \n", num1++); // increase 1 after printing it
    printf("num1: %d \n", num1);

    printf("num2: %d \n", num2);
    printf("++num2: %d \n", ++num2); // increase 1 before printing it
    printf("num2: %d \n", num2);

    return 0;


}