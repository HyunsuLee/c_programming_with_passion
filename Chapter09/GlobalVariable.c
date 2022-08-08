#include <stdio.h>

int num; //전역 변수가 0으로 초기화
void Add(int val)
{
    num += val; // 전역변수 num에 대해 작용
}
// 원래 책은 함수 이름만 선언해두고, 그 다음에 전역변수를 선언했는데, 이렇게 해도 잘 동작한다. 

int main(void)
{
    printf("num: %d \n", num); // num이 이미 선언되었으므로
    Add(3);
    printf("num: %d \n", num);
    num++; 
    printf("num: %d \n", num);
    return 0;
}

//void Add(int val)
//{
//    num += val; // 전역변수 num에 대해 작용
//}