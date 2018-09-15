#include<stdio.h>
#include<stdlib.h>

int asc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, sizeof(a) / sizeof(int), sizeof(int), asc);
    int ans = 0;
    for(int i = 0; i < n; i++) {
        x -= a[i];
        if (x < 0) {
            break;
        } else {
            ans++;
        }
    }
    if (x > 0) {
        ans--;
    }
    printf("%d", ans);
    return 0;
}
