#include <stdio.h>

int main() {
  int bil, total;

  total = 0;
  for (bil = 10; bil <= 100; bil++) {
    total += bil;
  }

  printf("10 + 11 + ... + 100 = %d\n", total);
}
