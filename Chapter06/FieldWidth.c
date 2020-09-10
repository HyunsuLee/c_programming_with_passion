#include <stdio.h>

int main(void)
{
    printf("%-8s %14s %5s \n", "이  름", "전공학과", "학년"); // -는 왼쪽 정렬. 숫자는 space
    printf("%-8s %14s %5s \n", "김동수", "전자공학", "3");
    printf("%-8s %14s %5s \n", "이을수", "컴퓨터공학", "2");
    printf("%-8s %14s %5s \n", "한성영", "미술교육학", "4");
    return 0;
}