#include <stdio.h>

int main(void)
{
    int nums;

    for (nums = 1; nums < 101; nums++)
    {
        if(nums%7 ==0)
            printf("%d \n", nums);
        else if(nums%9 == 0)
            printf("%d \n", nums);
    }
    return 0;
    
}