#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > 99 && a < 1000 && b > 99 && b < 1000) {
        printf("%d\n", a*(b%100%10));
        printf("%d\n", a*(b%100/10));
        printf("%d\n", a*(b/100));
        printf("%d\n", a*b);
    }
    return 0; 
}

// a%b=c는 a를 b로 남은 나머지값 c 출력