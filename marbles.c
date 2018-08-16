#include <stdio.h>
#include <string.h>

int main() {
    int ans = 0;
    char s[256];
    char a, b, c;
    scanf("%s", &s);
    strncpy(&a, s, 1);
    strncpy(&b, s + 1, 1);
    strncpy(&c, s + 2, 1);

    if (a == '1') {
        ans++;
    }
    if (b == '1') {
        ans++;
    }
    if (c == '1') {
        ans++;
    }
    printf("%d", ans);
    return 0;
}
