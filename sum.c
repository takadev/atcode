#include<stdio.h>
#include<string.h>

int main() {
    int n, a, b;
    int ans = 0;
    char buf[256];
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = 1; i <= n; i++) {
        snprintf(buf, 256, "%d", i);
        int s = 0;
        int len = strlen(buf);
        for (int j = 0; j < len; j++) {
            int t = buf[j] - '0';
            s += t;
        }
       if (a <= s && s <= b) {
            ans += i;
        }
    }
    printf("%d", ans);

    return 0;
}

