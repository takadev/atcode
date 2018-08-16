#include <stdio.h>
#include <string.h>

int main() {
    int len = 0;
    char c;
    char buf[256];
    char* p;

    while((c = getchar()) != EOF) {
        len = atoi(c);
    }
    printf("length is %d", len);

    if (fgets(buf, 256, stdin) == NULL) {
        return 1;
    }

    int ary[len];
    p = strtok(buf, " ");
    while(p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }

    /*
    for (int i = 0; i < len - 1; i++) {
        p = strtok(NULL, " "); 
        printf("%s\n", p);
    }
    */
    
    return 0;
}
