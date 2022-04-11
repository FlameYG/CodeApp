#include <stdio.h>

int main(void)
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a <= 1000 && a >= -1000 && b <= 1000 & b >= -1000) {
        if (a >= 0 && b >= 0) {
            printf("1");
        }
        else if (a < 0 && b >= 0) {
            printf("2");
        }
        else if (a < 0 && b < 0) {
            printf("3");
        }
        else if (a >= 0 && b < 0) {
            printf("4");
        }
    }
    return 0;
}