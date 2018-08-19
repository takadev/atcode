#include <stdio.h>

int main(void) {
    int n, a, b, sum, t, ans = 0;
    scanf("%d %d %d", &n, &a, &b);

    for(int i = 1; i <= n; i++){
        t = i;
        sum = 0;
        while(t > 0){
            sum += t % 10;
            t /= 10;
        }
        if(a <= sum && sum <= b) {
            ans += i;
        }
    }
    printf("%d", ans);
    return 0;
}
