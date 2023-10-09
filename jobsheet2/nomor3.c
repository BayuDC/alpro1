#include <stdio.h>

int main() {
  float p_dptan, jasa, komisi, total;

  printf("_-_-_- PT POLINOS -_-_-_\n");
  printf("\n");
  printf("Masukkan pendapatan ? ");
  scanf("%f", &p_dptan);
  printf("\n");

  if (p_dptan > 500000) {
    jasa = 30000;
    komisi = p_dptan * 20 / 100;
  } else if (p_dptan > 200000) {
    jasa = 20000;
    komisi = p_dptan * 15 / 100;
  } else {
    jasa = 10000;
    komisi = p_dptan * 10 / 100;
  }

  total = jasa + komisi;

  printf("\n");
  printf("Uang jasa  : %.0f\n", jasa);
  printf("Komisi     : %.0f\n", komisi);
  printf("Total uang : %.0f\n", total);
  printf("\n");
}
