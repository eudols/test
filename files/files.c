#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;
  int y;
} myint;

int main(int argc, char *argv[]) {
  FILE *fp;
  myint mint;
  myint mint2;
  mint.x = 3;
  mint.y = 5;
  fp = fopen("myfile","w+b");
  if (NULL == fp) {
    fprintf(stderr, "An error occurred before\n");
    return (EXIT_FAILURE);
  }
  fwrite(&mint, sizeof(myint), 1, fp);
  fclose(fp);
  printf("Test \n");

  fp = fopen("myfile","rb");
  if (NULL == fp) {
    fprintf(stderr, "An error occurred now\n");
    return (EXIT_FAILURE);
  }
  fread(&mint2, sizeof(myint), 1, fp);
  printf("x=%d  y=%d\n", mint2.x, mint2.y);
  fclose(fp);

  return (EXIT_SUCCESS);
}
