#include <stdio.h>

int main() {
  float p, l, kel, luas;

  printf("Isikan nilai panjang ? ");
  scanf("%f", &p);
  printf("Isikan nilai lebar ? ");
  scanf("%f", &l);

  kel = 2 * (p + l);
  luas = p * l;

  printf("Dengan panjang = %f, dan lebar = %f\n", p, l);
  printf("Maka kelilingnya = %f, dan luasnya = %f\n", kel, luas);
}