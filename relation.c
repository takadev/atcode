#include <stdio.h>

int main() {
    int n, m;
    int ans = 0;
    scanf("%d %d", &n, &m);
    for(int i = 1; i = 1; i++) {
        for(int j = 1; j <= n; j++) {
            if ((i + j) % m == 0) {
                ans++;
            }
        }
    }
    printf("%d", ans);
    return 0;
}
