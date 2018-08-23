#include <stdio.h>

int main() {
    int n, y;
    scanf("%d %d", &n, &y);
    int i, j, k;
    for(i = 0; i <= n; i++) {
        for(j = 0; j <= n - i; j++) {
            k = n - (i + j);
            int t = 10000 * i + 5000 * j + 1000 * k;
            if (t == y) {
                printf("%d %d %d\n", i, j, k);
                return 0;
            }
        }
    }
    printf("-1 -1 -1\n");
    return 0;
}

