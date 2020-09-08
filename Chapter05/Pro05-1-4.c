#include <stdio.h>

int main(void)
{
    int char1;

    printf("아스키 값을 입력해주세요.");
    scanf("%d", &char1);

    printf("입력된 아스키 값 %d의 알파벳은 %c입니다. \n", char1, char1);
    return 0;
}