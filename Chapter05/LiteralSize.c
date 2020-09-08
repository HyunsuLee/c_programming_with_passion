#include <stdio.h>

int main(void)
{
    printf("literal int size: %lu \n", sizeof(7));
    printf("literal double size: %lu \n", sizeof(7.14));
    printf("literal char size: %lu \n", sizeof('A'));
    return 0;
}

/*
'A'의 sizeof 결과는 4 bytes로 나오는데 이에 대해서는 부연설명이 필요하다.
만약 char ch = 'A'로 자료형을 지정해서 선언했다면 ch의 size는 1 byte이다.
하지만 코드를 컴파일러는 ASCII 값으로 읽어낸다. 즉 ch = 65로 받아들이는 것.
만약 리터럴상수로 'A'를 메모리에 띄운다면, 컴파일러는 65를 저장한다고 읽어낸다.
정수형이므로 int 형태로 저장하고 따라서 size는 4 bytes
*/