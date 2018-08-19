#include<stdio.h>

int main() {
    int n, tmp;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int j = 0; j < n; j++) {
        for(int k = j + 1; k < n; k++) {
            if (a[j] < a[k]) {
                tmp = a[j];
                a[j] = a[k];
                a[k] = tmp;
            }
        }
    }

    int al = 0; 
    int bo = 0;
    for (int i = 0; i < n; i += 2) {
        al += a[i];
    }
    for (int i = 1; i < n; i += 2) {
        bo += a[i];
    }
    printf("%d", al - bo);
    return 0;
}
