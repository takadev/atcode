#include <stdio.h>
#define N 507
 
int main (void) {
  int n, m, k, l, r, p, q, a[N][N], b[N][N];
 
  scanf("%d %d %d", &n, &m, &k);
 
  for (int i = 0; i < m; i++)  {
    scanf("%d %d", &l, &r);
    a[l][r]++;
  }
 
  for (int i = 0; i < N; i++)
    b[i][0] = b[0][i] = 0;
 
  for (int i = 1; i < N; i++)
    for (int j = 1; j < N; j++)
      b[i][j] = b[i-1][j] + b[i][j-1] - b[i-1][j-1] + a[i][j];
  
  for (int i = 0; i < k; i++) {
    scanf("%d %d", &p, &q);
    printf("%d\n", b[q][q] - b[p-1][q] - b[q][p-1] + b[p-1][p-1]);
  }
 
  return 0;
}
