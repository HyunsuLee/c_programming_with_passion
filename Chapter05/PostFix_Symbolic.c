#include <stdio.h>

/*
원래 책에는 따로 코드 블록으로 처리되어 있지 않고, 본문에 설명으로만 코드가 삽입되어 있으나
직접 실행지켜봄. 따라서 c 파일명은 책이 없는 것을 임의로 붙인 것임
*/

int main(void)
{
    float num1 = 5.789; //책의 설명과 달리 경고 메시지가 출력되지 않음.
    float num2 = 3.24 + 5.12;
    float num3 = 5.789f; //책의 추천 방식. 그러나 위와 같이 변수 선언해도 컴파일(gcc)이 받아줌.
    float num4 = 3.24F + 5.12F;

    const int MAX = 100; //아예 변경불가능한 상수를 선언할때, 심볼릭 상수라 한다.
    const double PI = 3.1415;
    const int MIN; //쓰레기 값으로 초기화 된다고 함.
    
    //MAX = 100; 이건 컴파일 에러가 뜸.
    printf("심볼릭 상수 MIN 초기 값은 %d입니다. \n", MIN); //32767로 고정되어 있는 듯.

    return 0;
}

/*
심볼릭 상수를 선언할 때는 모두 대문자를 쓰는 것이 관례.
*/