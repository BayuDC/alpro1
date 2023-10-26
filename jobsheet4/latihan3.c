#include <stdio.h>

void hukum_ohm() {
  float v, r, i;
  printf("isikan nilai tegangannya? ");
  scanf("%f", &v);
  printf("isikan nilai resistansinya? ");
  scanf("%f", &r);

  i = v / r;
  printf("Arus = %5.3f ampere\n", i);
  printf("dari tegangan = %5.1f volt\n", v);
  printf("dan resistansi = %5.1f ohm", r);
}

void konversi_suhu() {
  float c, r, f;
  printf("CELCIUS   REAMUR  FAHRENHEIT\n");
  printf("=============================\n");

  for (c = 0; c <= 100; c += 10) {
    r = c * 4 / 5;
    f = c * 9 / 5 + 32;
    printf("%8.2f%8.2f%12.2f\n", c, r, f);
  }
}

int main() {
  int pilihan;
  printf("Menu pilihan\n\n");

  printf(" [1] Hukum Ohm\n [2] Konversi Suhu\n");
  printf("\nPilihan anda? ");
  scanf("%d", &pilihan);
  switch (pilihan) {
    case 1:
      hukum_ohm();
      break;
    case 2:
      konversi_suhu();
      break;
    default:
      printf("Anda salah pilih !!!");
  }

  printf("\n");
}