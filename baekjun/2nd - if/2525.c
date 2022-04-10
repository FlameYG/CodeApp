#include <stdio.h>

int main(void)
{
    int h, m, c, a, b;
    scanf("%d %d", &h, &m);
    scanf("%d", &c);
    if (h <= 23 && h >= 0 && m <= 60 & m >= 0 && c >= 0 && c <= 1000) {
        if (c / 60 > 0) {
            h = h + (c / 60);
        }
        if (m + c > 60) {
            if (c % 60 + m >= 60) {
                h = h + 1;
            }
            a = (m + c) / 60;
            m = (m + c) - 60 * a;    
        }
        else if (m + c == 60) {
            h = h + 1;
            m = 0;
        }
        else {
            m = m + c;
        }
        if (h >= 24) {
            h = h % 24;
        }
        printf("%d %d", h, m);
    }
    return 0;
}