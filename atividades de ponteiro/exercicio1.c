#include <stdio.h>

int main () {

int x, y;
int *p = &y;

y = 0;

x = *p; // x = 0

x = 4; // x = 4

(*p) ++; // y = 1

--x; // x = 3

(*p) +=x; // y = 4

}