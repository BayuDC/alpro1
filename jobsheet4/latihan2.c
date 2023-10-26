#include <stdio.h>

void garis1() { printf("--------------------------\n"); }
void garis2() { printf("==========================\n"); }

void luassegi3() {
  float a, b, c;
  printf("Isikan panjang sisi a? ");
  scanf("%f", &a);
  printf("Isikan panjang sisi b? ");
  scanf("%f", &b);

  c = a * b / 2;

  printf("Luas = %8.2f\n", c);
}

int main() {
  garis1();
  luassegi3();
  garis2();
}