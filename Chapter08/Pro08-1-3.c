#include <stdio.h>

int main(void)
{
    double lan, eng, math;
    double mean;
    
    printf("국어, 영어, 수학 점수 입력: ");
    scanf("%lf %lf %lf", &lan, &eng, &math);

    mean = (lan+eng+math)/3;

    printf("학점은 ");
    if (mean >= 90)
        printf("A \n");
    else if(mean >= 80)
        printf("B \n");
    else if(mean >= 70)
        printf("C \n");
    else if(mean >= 50)
        printf("D \n");
    else
        printf("F \n");

    return 0;
}