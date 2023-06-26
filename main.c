#include <stdio.h>
#include "math.c"

int main(int argc, char* argv[])
{
  
  int a, b;
  printf("a:");
  scanf("%i", &a);
  printf("b:");
  scanf("%i", &b);

  printf("\npow: %i\n", power(a, b));

  return 0;
}
