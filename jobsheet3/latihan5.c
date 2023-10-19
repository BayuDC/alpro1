#include <stdio.h>

int main() {
  int x, y;

  printf("Belajar loop di dalam loop\n");

  for (x = 1; x <= 3; x++) {
    for (y = 1; y <= 4; y++) {
      printf("%d %d \n", x, y);
    }
  }
}