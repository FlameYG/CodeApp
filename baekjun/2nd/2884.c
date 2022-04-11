#include <stdio.h>

int main(void)
{
    int h, m, a;
    scanf("%d %d", &h, &m);
    if (h <= 23 && h >= 0 && m <= 60 & m >= 0) {
        if (m >= 45) {
            m = m - 45;
            printf("%d %d", h, m);
        }
        else if (m < 45) {
            if (h == 0) {
                h = 24;
            }
            h = h - 1;
            a = m - 45;
            m = 60 + a;
            printf("%d %d", h, m);
        }
    }
    return 0;
}