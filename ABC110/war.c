#include<stdio.h>

int main() {
    int N, M, X, Y;
    scanf("%d %d %d %d", &N, &M, &X, &Y);
    int x[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &x[i]);
    }
    int y[M];
    for(int i = 0; i < M; i++) {
        scanf("%d", &y[i]);
    }
    for(int i = 0; i < N; i++) {
        for(int j = N - 1; j > i; j--) {
            if (x[j] > x[j-1]) {
                int tmp = x[j];
                x[j] = x[j-1];
                x[j-1] = tmp;
            }
        }
    }
    for(int i = 0; i < M; i++) {
        for(int j = M - 1; j > i; j--) {
            if (y[j] < y[j-1]) {
                int tmp = y[j];
                y[j] = y[j-1];
                y[j-1] = tmp;
            }
        }
    }

    for(int z = X; z <= Y; z++) {
        if (x[0] < z && z >= y[0]) {
            printf("No War");
            return 0;
        }
    }
    printf("War");
    return 0;
}
