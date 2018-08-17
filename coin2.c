#include<stdio.h>

int main() {
    int a, b, c, x;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &x);

    int ans, m2, m3 = 0;
    int m = x;
    for (int i = 0; i <= a; i++) {
        m -= (500 * i);
        if (m < 0) {
            break;
        } else if (m == 0) {
            ans++;
            break;
        }
        m2 = m;
        for (int j = 0; j <= b; j++) {
            m -= (100 * j);
            if (m < 0) {
                break;
            } else if (m == 0) {
                ans++;
                break;
            }
            m3 = m;
            for (int k = 0; k <= c; k++) {
                m -= (50 * k);
                if (m == 0) {
                    ans++;
                    break;
                }
                m = m3;
            }
            m = m2;
        }
        m = x;
    }
    printf("%d", ans);
    return 0;
}
