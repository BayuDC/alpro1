#include <stdio.h>

int main() {
  float nilai;

  printf("Berapakah nilai anda ? ");
  scanf("%f", &nilai);
  if (nilai >= 80) {
    printf("ANDA MENDAPAT NILAI A");
  } else if (nilai >= 70) {
    printf("ANDA MENDAPAT NILAI B");
  } else if (nilai >= 60) {
    printf("ANDA MENDAPAT NILAI C");
  } else if (nilai >= 40) {
    printf("ANDA MENDAPAT NILAI D");
  } else {
    printf("ANDA MENDAPAT NILAI E");
  }

  printf("\n\n");
}
