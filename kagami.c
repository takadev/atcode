#include<stdio.h>

int main() {
    int n, tmp;
    scanf("%d", &n);
    int d[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &d[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if (d[i] > d[j]) {
                tmp = d[j];
                d[j] = d[i];
                d[i] = tmp;
            }
        }
    }

    int pr = d[0];
    int ans = 1;
    for(int i = 1; i < n; i++) {
        if (pr != d[i]) {
            ans++;
        }
        pr = d[i];
    }
    printf("%d", ans);
    return 0;
}
