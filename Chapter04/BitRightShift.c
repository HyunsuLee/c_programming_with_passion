#include <stdio.h>

/*
양수 비트를 오른쪽으로 이동할 때는 오른쪽 bit사라진다.
만약 1111 bit 라면 111, 11, 1이 된다. 
15 -> 7 -> 3 -> 1이 되는 것. 즉 홀수라면 1을 더해 반으로 나누고, 다시 1을 뺀다.
짝수라면 그냥 반으로 나누면 된다. (짝수면 오른쪽 끝 bit가 0이므로 없어져도 무방)
근데 음수라면? 이건 CPU마다 다르다고 한다.
왼쪽 끝을 1로 채운다면 MSB가 1로 유지되므로 부호가 유지되고, 
왼쪽 끝을 0으로 채운다면 부호가 양수로 바뀐다.  
*/

int main(void)
{
    int num = -16; //11110000
    int num2 = 0x7FFFFFF8;

    printf("1칸 이동 결과: %d \n", num>>1);
    printf("2칸 이동 결과: %d \n", num>>2);
    printf("3칸 이동 결과: %d \n", num>>3);

    printf("%d \n", num2);
    return 0;
}

/*
test결과 내 CPU는 부호 유지. 그러면 그냥 2로 나눈결과다.
만약 부호 유지가 안된다면?
01111000이 되는데, int의 용량이 4byte이면 01111111 11111111 11111111 11111000이다.
이걸 십진수로 변환하면 2147483640 (이건 16진수로 7FFFFFF8)
*/
