#include<stdio.h>

int main() {
    int a, b, c, x, ans;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &x);

    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                if (500 * i + 100 * j + 50 * k == x) {
                    ans++;
                }
            }
        }
    }
    printf("%d", ans);
    return 0;
}
