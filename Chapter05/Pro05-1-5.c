#include <stdio.h>

int main(void)
{
    char asc;

    printf("알파벳을 입력: ");
    scanf("%c", &asc);

    printf("입력된 알파벳 %c의 아스키 값은 %d", asc, asc);
    return 0;
}