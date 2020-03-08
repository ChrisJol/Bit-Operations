#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);
void itob(int);

int main(void) {
  int x = 10, y = 20;

  printf("before\n");
  printf("x = "); itob(x);
  printf("y = "); itob(y);
  printf("\n");

  swap(&x, &y);

  // printf("after\n");
  printf("x = "); itob(x);
  printf("y = "); itob(y);
}

void swap(int * x, int * y)
{
  *x = *x ^ *y;
  *y = *x ^ *y;
  *x = *x ^ *y;
}

void itob(int n)
{
  int i = 15;
  int * b = calloc(16, sizeof(int));

  printf("%d: ", n);

  while(n > 0)
  {
    b[i] = n % 2;
    i--;
    n /= 2;
  }

  for(int i = 0; i < 16; i++) printf("%d", b[i]);
  printf("\n");

  free(b);
  b = NULL;
}