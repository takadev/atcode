#include <stdio.h>

int main(void)
{
  int c;
  int i = 0;

  while((c = getchar()) != '\0') {
    printf( "%c\n", c);
    i = atoi(c);
    printf("%d", i);
  }

  return 0;
}
