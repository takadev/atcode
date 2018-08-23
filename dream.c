#include <stdio.h>
#include <string.h>

int main() {
    char buf[100010];
    char t[64] = { '\0' }; 
    char s[][8] = {
        "dreamer",
        "eraser",
        "dream",
        "erase",
    };
    scanf("%s", &buf);

    int bl = strlen(buf);
    int n = 0; 
    while(1) {
loop:
        printf("----\n");
        if (n >= bl) {
            printf("YES");
            return 0;
        }
        for(int i = 0; i < 4; i++) {
            printf("n is %d\n", n);
            printf("s is %s\n", s[i]);
            int sl = strlen(s[i]);
            t[0] = '\0';
            printf("sl is %d\n", sl);
            strncpy(t, buf + n, sl); 
            printf("t is %s\n", t);
            if (strcmp(t, s[i]) == 0) {
                printf("icchi\n");
                n += sl;
                goto loop;
            }
        }
        printf("NO"); 
        return 0;
    }
}
