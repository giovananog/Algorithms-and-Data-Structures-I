#include <stdio.h>

int main(void) {
 for (int n=111; n<=999; n++) {
  int u, d, c, ni, n2, n2i, k, p, s;
  u = (n%10);
  d = (n/10%10);
  c = (n/10/10);
  if (u!=d && d!=c && c!=u && c!=0 && d!=0 && u!=0) {
    ni=(c)+(10*d)+(100*u);
    k++; 
    if (n>ni) {
      n2=(n-ni);
      p=n;
      s=ni; }
    else { 
      n2=(ni-n);
      p=ni; 
      s=n; }
    n2i =(n2%10*100) + (n2/10%10*10) + (n2/10/10);
    printf("caso %3d: %d-%d=%3d, %3d+%d=%d\n", k, p, s, n2, n2, n2i, n2 + n2i); 
    } 
  } 
}
