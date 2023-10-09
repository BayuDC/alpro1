#include <stdio.h>

int main() {
  float euro, idr, yen, usd;

  printf("-----Kurs Mata Uang-----\n");

  euro = 250;
  idr = euro * 16374.57;
  yen = euro * 157.82;
  usd = euro * 1.06;

  printf("EURO : %.2f\n", euro);
  printf("IDR  : %.2f\n", idr);
  printf("YEN  : %.2f\n", yen);
  printf("USD  : %.2f\n", usd);

  printf("\n");
}