#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char buf[2048];
    char* p;
    int len, ans, i, check = 0;

    if (fgets(buf, 3, stdin) == NULL) {
        return 1;
    }
    len = atoi(buf);
    if (len == 0) {
        return 1;
    }
    int ary[len];
    if (fgets(buf, 2048, stdin) == NULL) {
        return 1;
    }

    p = strtok(buf, " ");
    ary[i] = atoi(p);
    while((p = strtok(NULL, " ")) != NULL) {
        i++;
        ary[i] = atoi(p);
    }

    while(1) {
        for(int j = 0; j < len; j++) {
            if (ary[j] % 2 != 0) {
                check = 1;
                break;
            }
            ary[j] /= 2;
        }
        if (check == 1) {
            break;
        }
        ans++;
    }

    printf("%d", ans);

    return 0;
}
