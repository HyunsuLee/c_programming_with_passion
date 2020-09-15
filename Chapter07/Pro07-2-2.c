#include <stdio.h>

int main(void)
{
    int iter_1=0, iter_2;

    while (iter_1 < 5)
    {
        iter_2 = 0;
        while (iter_2 < iter_1)
        {
            printf("O ");
            iter_2++;
        }
        
        printf("* \n");
        iter_1++;
    }
    return 0;
}