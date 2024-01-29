#include <stdio.h>

int main(void) {
  int x, y, z, w;
  int *p1;
  int *p2 = &x;
  int *p3 = &z;

  p1 = p2;
  *p2 = 10;
  y = 20;

  int **pp;
  pp = &p1;
  *p3 = **pp;

  int *p4 = &w;
  *p4 = y + (*p1)++;

  printf("%d\t%d\t%d\t%d\n", x, y, z, w);

  return 0; 
}


// os valores impressos são esses: 11, 20, 10, 30.