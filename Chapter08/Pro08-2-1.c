#include <stdio.h>

int main(void)
{
    int num = 1, dan = 2;

    for (dan = 2; dan<9; dan++)
    {
        if(dan%2 != 0)
            continue;
        for(num = 1; num<9; num++)
        {
            printf("%d x %d = %d \n", dan, num, dan * num);
            if(dan == num)
                break;
        }
    }
    return 0;
}