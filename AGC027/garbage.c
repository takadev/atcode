#include<stdio.h>

long move(int k, long d) {
    int s = k + 1;
    int p = s * s;
    return p * d;
}

int main() {
    int N, X;
    scanf("%d %d", &N, &X);
    int x[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &x[i]);
    }
    long e1 = 0;
    int k = 0;
    e1 += move(k, x[N - 1]);
    for(int i = N - 1; i >= 0; i--){
        e1 += X;
        k++;
        int d = 0;
        if (i == 0) {
            d = x[i];
            e1 += X;
        } else {
            d = x[i] - x[i -1];
        }
        e1 += move(k, d);
    }

    long e2 = 0;
    k = 0;
    for(int i = 0; i < N; i++) {
        long t = move(k, x[i]);
        e2 += t;
        e2 += X;
        k++;
        long t2 = move(k, x[i]);
        e2 += t2;
        e2 += X;
        k--;
    }

    if (e1 < e2) {
        printf("%ld", e1);
    } else {
        printf("%ld", e2);
    }
    return 0;
}
