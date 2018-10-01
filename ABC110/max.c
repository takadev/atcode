#include<stdio.h>

int main() {

    int num[3];
    for(int i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 2; j > i; j--) {
            if (num[j] > num[j-1]) {
                int tmp = num[j];
                num[j] = num[j-1];
                num[j-1] = tmp;
            }
        }
    }

    int sum = num[0] * 10 + num[1] + num[2];
    printf("%d", sum);
    
    return 0;
}
