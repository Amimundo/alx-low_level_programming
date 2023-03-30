#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember: function (n get 2 bit and a 5 bites so: | n | n | a0 | a0 | a1 | a1 | a2 | a2 |..., p get the adresse of n, so p[5] it will edit a[2])
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 5) = 98;
  printf("a[2] = %d\n", a[2]);
  return (0);
}
