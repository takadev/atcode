#include <stdio.h>

int main() {
    int n, ans;
    int odd = 0;
    int even = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    ans = odd * even;
    printf("%d", ans);
    return 0;
}
