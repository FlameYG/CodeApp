#include <stdio.h>

int main(void)
{
    long double a, b;
    scanf("%Lf %Lf", &a, &b);
    printf("%.15Lf", a/b);
}

// 실수형 표현은 float(%f) -> double(%f) -> long double(%Lf)