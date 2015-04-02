#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{

  int *x;
  
  x = malloc(sizeof(int));

  *x = 3;

  printf("x = %d\n", *x);

  x = NULL;

  printf("x = %d\n", *x);

  return (EXIT_SUCCESS);


}
