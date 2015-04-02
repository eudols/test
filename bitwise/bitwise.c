#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdbool.h>

#define SET_ON 0x4

bool isLittleEndian(void)
{
  uint32_t a = 0xababcdcd;
  uint32_t b;
  b = htonl(a);
  if (a != b) {
    printf("Little Endian\n");
    return (true);
  } else {
    printf("Big Endian\n");
    return (false);
  } 
}

int main(int argc, char *argv[])
{
  uint8_t x,y;
  uint32_t z = 0xababcdcd;
  uint32_t s;
  bool lend;

  s = htonl(z);
 
  lend = isLittleEndian();

  printf("isLittle Endian is %s\n", lend ? "true" : "false");

  x = 0;
  y = 0;

  y = 3;

  y <<= 2;

  x = x | SET_ON;

  /* Remove flag */

  x = x & ~SET_ON;

  return (EXIT_SUCCESS);
  
}
