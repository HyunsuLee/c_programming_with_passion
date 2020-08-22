#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num13 = 10;
    int num2 = (num1--) + 2; // decrease 1 after whole calculation
    int num3 = (--num13) + 2; // decrease 1 before whole calculation, I just made it up(not included original book) 

    printf("num1: %d \n", num1);
    printf("num2: %d \n", num2); 
    printf("num3: %d \n", num3);
    printf("num13: %d \n", num13);

    return 0;


}