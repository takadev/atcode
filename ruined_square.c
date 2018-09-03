#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int xdiff = x2 - x1;
    int ydiff = y2 - y1;
    int x3, y3, x4, y4;
    x3 = x2 - ydiff;
    y3 = y2 + xdiff;
    x4 = x3 - xdiff;
    y4 = y3 - ydiff;
    printf("%d %d %d %d", x3, y3, x4, y4);
    return 0;
}
