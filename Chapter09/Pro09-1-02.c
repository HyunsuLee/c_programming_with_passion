#include <stdio.h>

double CelToFah(double temp)
{
    return (1.8 * temp) + 32;
}

double FahToCel(double temp)
{
    return (temp - 32) / 1.8;
}

int main(void)
{
    int opt;
    double temp;

    printf("섭씨를 화씨로 1, 화씨를 섭씨로 2: ");
    scanf("%d", &opt);
    printf("변환할 온도는? ");
    scanf("%lf", &temp);

    switch (opt)
    {
    case 1:
        printf("섭씨 %lf는 화씨로 %lf입니다. \n", temp, CelToFah(temp));
        break;

    case 2:
        printf("화씨 %lf는 섭씨로 %lf입니다. \n", temp, FahToCel(temp));
        break;
    
    default:
        printf("옵션에서 1 또는 2를 입력하세요. \n");
        break;
    }
    return 0;
}