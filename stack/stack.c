#include <unistd.h>

int foo(int x, int y, int z, int m, int n, int o, int p, int q);

int bar(int x);

int mar(int x);

int main() {
  int a = 5;
  int b = 2;
  int c = 0;
  c = a + b;
  c = foo(1, 2, 3, 4, 5, 6, 7, 8);
  return 0;
}

int foo(int x, int y, int z, int m, int n, int o, int p, int q) {
  int b = 11;
  int c = 12;
  int d = 13;
  c = x + y + z + m + n + o + p + q;
  d = bar(c);
  return (d);
}
  
int bar(int x) {
  int a = 4;
  int b = 8;
  int c = 0;
  int d = 0;
  c = a + b + x;
  d = mar(c);
  return (d);
}

int mar(int x) {
  int a = 3;
  int d = 0;
  int *z = NULL;
  z = &a;
  z = &d;
  z = &x;
  d = a + x;
  sleep(60);
  return (d);
}
