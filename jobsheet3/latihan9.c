#include <stdio.h>

int main() {
  int x;
  for (x = 1; x <= 9; x++) {
    if (x == 6) {
      break;
    }
    printf("%d", x);
  }
  printf("\n");
}