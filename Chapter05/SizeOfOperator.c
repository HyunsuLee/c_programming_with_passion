#include <stdio.h>

int main(void)
{
    char ch = 9;
    int inum= 1052;
    double dnum = 3.1415;
    printf("변수 ch의 크기: %lu \n", sizeof(ch)); // 책에는 %d로 되어 있으나 sizeof가 반환하는 것은 long unsigned int라고 에러가 남.
    printf("변수 inum의 크기: %lu \n", sizeof(inum));
    printf("변수 dnum의 크기: %lu \n", sizeof(dnum));

    printf("char의 크기: %lu \n", sizeof(char));
    printf("int의 크기: %lu \n", sizeof(int));
    printf("long의 크기: %lu \n", sizeof(long));
    printf("long long의 크기: %lu \n", sizeof(long long));
    printf("float의 크기: %lu \n", sizeof(float));
    printf("double의 크기: %lu \n", sizeof(double));
    printf("long double의 크기: %lu \n", sizeof(long double)); //원래 책에는 없지만, 임의로 추가한 것, 무려 16bytes..
    return 0;
}