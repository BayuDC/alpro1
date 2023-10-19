#include <stdio.h>

int main() {
  int bil, total;

  total = 0;

  printf("Masukkan sebuah angka : ");
  scanf("%d", &bil);

  for (bil; bil >= 1; bil--) {
    total += bil;
  }

  printf("Hasil bilangan triangular: %d\n", total);
}
