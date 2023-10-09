#include <stdio.h>

int main() {
  float pi, r, k, l;

  pi = 3.14;

  printf("-----Kalkulator Lingkaran-----\n");
  printf("Jari-jari ? ");
  scanf("%f", &r);

  k = 2 * pi * r;
  l = pi * r * r;

  printf("Luas      : %.2f\n", l);
  printf("Keliling  : %.2f\n", k);
  printf("\n");
}