#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if(a >= 1000 && a <= 3000) {
        printf("%d", a-543);
    }
    return 0;
}