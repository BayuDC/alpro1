#include <stdio.h>

int main() {
  float c, r, f;

  printf("-----Kalkulator Suhu-----\n");
  printf("Celcius    ? ");
  scanf("%f", &c);

  r = c * 4 / 5;
  f = c * 9 / 5 + 32;

  printf("Reamur     : %.2f\n", r);
  printf("Fahrenheit : %.2f\n", f);
  printf("\n");
}