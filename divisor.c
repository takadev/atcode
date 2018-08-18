#include<stdio.h>

int main() {
    int n;
    int ans = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue;
        }
        int div = 0;
        for(int j = 1; j <= i; j++) {
            if (i % j == 0) {
                div++;
            }
        }
        if (div == 8) {
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}
