#include <stdio.h>

int main() {
  float pi, r, t, l, v;

  pi = 3.14;

  printf("-----Kalkulator Tabung-----\n");
  printf("Jari-jari ? ");
  scanf("%f", &r);
  printf("Tinggi    ? ");
  scanf("%f", &t);

  v = pi * r * r * t;
  l = pi * r * r;

  printf("Volume    : %.2f\n", v);
  printf("Luas      : %.2f\n", l);
  printf("\n");
}