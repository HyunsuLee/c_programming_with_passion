#include <stdio.h>

int main(void)
{
    int num=1;

    if(num==1)
    {
        //int num=7; //이행을 주석처리하면 어떻게 될까? 주석처리하면 main 함수의 num=1이 들어온다. 
        num+=10;
        printf("if문 내 지역변수 num: %d \n", num);
    }
    printf("main 함수 내의 지역변수 num: %d \n", num); 
    // if문 내에서 정의되었던 num은 무시되는데, 만약 if문 내에 새로 num이 선언되지 않아 main의 
    //num을 끌어가서 연산을 했다면, 그 결과가 main num에 대해 행해진 것이므로 그것이 반영된다.

    return 0;
}