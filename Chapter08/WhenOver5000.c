#include <stdio.h>

int main(void)
{
    int sum = 0, num = 0;

    while(1) //무한 반복문임.
    {
        sum+= num;
        if(sum>5000)
            break; // break문 실행! 따라서 반복문 탈출. if문을 탈출하는게 아님!!
        num++;
    }

    printf("sum: %d \n", sum);
    printf("num: %d \n", num);
    return 0;
}