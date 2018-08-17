#include <stdio.h>

int main() {
    int a, b, c, x;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &x);

    int ans, check = 0;
    int money = x;
    int money2, money3;
    for(int i = a; i >= 0; i--) {
        money -= (500 * i);
        if (money == 0) {
            ans++;
            money = x;
            continue;
        } else if (money < 0) {
            money = x;
            continue;
        }
        money2 = money;
        for(int j = b; j >= 0; j--) {
            money -= (100 * j);
            if (money == 0) {
                ans++;
                money = money2;
                continue;
            } else if (money < 0) {
                money = money2;
                continue;
            }
            money3 = money;
            for(int k = c; k >= 0; k--) {
                money -= (50 * k);
                if (money == 0) {
                    ans++;
                    money = money2;
                    break;
                } else {
                    money = money3;
                    continue;
                }
            }
        }
    }
    printf("%d", ans);
    return 0;
}
    
