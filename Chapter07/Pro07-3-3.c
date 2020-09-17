#include <stdio.h>

int main(void)
{
    int cur = 2, is = 1;

    do
    {
        do
        {
            printf("%d x %d = %d \n", cur, is, cur * is);
            is += 1;
        } while (is < 10);
        cur += 1;
        is = 0;
    } while (cur < 10);
    return 0;
    
}