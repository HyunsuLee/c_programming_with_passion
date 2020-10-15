#include <stdio.h>

int main(void)
{
    int A = 0, Z = 0;

    int result;

    for (A = 0; A<10; A++)
    {
        for (Z = 0; Z<10; Z++)
        {
            result = A*11 + Z*11;
            if (result != 99)
                continue;
            printf("A = %d, Z = %d 라면 ", A, Z);
            printf("%d \n", result);
        }
    }
    return 0;
}