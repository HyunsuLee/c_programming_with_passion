#include <stdio.h>

void Fibonacci(int num)
{
    int start1 = 0, start2 = 1;
    int i;
    int next_fib;

    printf("%d \n", start1);
    if(num == 1)
        return;
    printf("%d \n", start2);
    if(num == 2)
        return;
    else
    {
        for(i = 2; i < num; i++)
        {
            next_fib = start1 + start2;
            printf("%d \n", next_fib);
            start1 = start2;
            start2 = next_fib;
        }
    }
}

int main(void)
{
    int num;
    
    printf("출력할 갯수: ");
    scanf("%d", &num);

    Fibonacci(num);
    return 0;
}