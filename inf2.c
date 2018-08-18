#include<stdio.h>
#include<string.h>

int main() {
    char ans;
    char buf[256];
    long int k;
    scanf("%s", &buf);
    scanf("%ld", &k);

    int len = strlen(buf);

    for(int i = 0; i < len; i++) {
        if (buf[i] == '1') {
            ans = '1';
            continue;
        }
        if (k < i + 1) {
            ans = '1';
            break;
        }
        ans = buf[i];
        break;
    }
    printf("%c", ans);
    return 0;
}

