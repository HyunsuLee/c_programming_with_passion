#include <stdio.h>

int main(void)
{
    int x1, y1;
    int x2, y2;
    int area;

    printf("좌 상당의 x, y좌표는? ");
    scanf("%d %d", &x1, &y1);
    printf("우 하단의 x, y좌표는? ");
    scanf("%d %d", &x2, &y2);
    area = (x2 - x1) * (y2 - y1);

    printf("직사각형의 넓이는 %d \n", area);
    return 0;
}