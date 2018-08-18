#include<stdio.h>

int main() {
    int N, M, Q;
    scanf("%d", &N);
    scanf("%d", &M);
    scanf("%d", &Q);

    int l[M];
    int r[M];
    int q[Q];
    int p[Q];
    int a, b = 0;
    for (a = 0; a < M; a++) {
        scanf("%d %d", &l[a], &r[a]);
    }
    for (b = 0; b < Q; b++) {
        scanf("%d %d", &p[b], &q[b]);
    }

    for(int j = 0; j < Q; j++) { 
        int ans = 0;
        for (int k = 0; k < M; k++) {
            if (p[j] <= l[k] && r[k] <= q[j] ) {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
