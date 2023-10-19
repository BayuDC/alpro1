#include <stdio.h>

int main() {
  char x;
  for (x = 'Z'; x >= 'A'; x--) {
    printf("%c", x);
  }
  printf("\n");
}