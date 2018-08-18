#include<stdio.h>
#include<string.h>

int main() {
    char buf[4096];
    char str[4096] = "";
    long int k;
    scanf("%s", &buf);
    scanf("%ld", &k);

    while(1) {
        int len = strlen(buf);
        for (int i = 0; i < len; i++) {
            switch(buf[i]) {
                case '1':
                    strcat(str, "1");
                    break;
                case '2':
                    strcat(str, "22");
                    break;
                case '3':
                    strcat(str, "333");
                    break;
                case '4':
                    strcat(str, "4444");
                    break;
                case '5':
                    strcat(str, "55555");
                    break;
                case '6':
                    strcat(str, "666666");
                    break;
                case '7':
                    strcat(str, "7777777");
                    break;
                case '8':
                    strcat(str, "88888888");
                    break;
                case '9':
                    strcat(str, "999999999");
                    break;
                default:
                    break;
            }
        }
        strcpy(buf, str); 
        printf("---\n");
        printf("%s\n", buf);
        break;
    }
    return 0;
}
    
