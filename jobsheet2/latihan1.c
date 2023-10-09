#include <stdio.h>

int main() {
  float nilai;

  printf("Berapakah nilai anda ? ");
  scanf("%f", &nilai);

  if (nilai >= 60) {
    printf("LULUS");
  } else {
    printf("REMIDI");
  }

  printf("\n\n");
}