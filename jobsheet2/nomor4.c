#include <stdio.h>

int main() {
  printf("Kalkulator Bangun Datar\n\n");
  printf("1. Bujur sangkar\n");
  printf("2. Persegi panjang\n");
  printf("3. Lingkaran\n\n");

  int pilihan;

  printf("Masukkan pilihan : ");
  scanf("%d", &pilihan);
  printf("======================\n");

  float luas, keliling;
  switch (pilihan) {
    case 1:
      float sisi;

      printf("Sisi      ? ");
      scanf("%f", &sisi);

      luas = sisi * sisi;
      keliling = 4 * sisi;

      printf("Luas      : %.2f\n", luas);
      printf("Keliling  : %.2f\n", keliling);

      break;
    case 2:
      float panjang, lebar;

      printf("Panjang   ? ");
      scanf("%f", &panjang);
      printf("Lebar     ? ");
      scanf("%f", &lebar);

      luas = panjang * lebar;
      keliling = 2 * (panjang + lebar);

      printf("Luas      : %.2f\n", luas);
      printf("Keliling  : %.2f\n", keliling);

      break;
    case 3:
      float jari_jari;

      printf("Jari jari ? ");
      scanf("%f", &jari_jari);

      luas = 3.14 * jari_jari * jari_jari;
      keliling = 3.14 * 2 * jari_jari;

      printf("Luas      : %.2f\n", luas);
      printf("Keliling  : %.2f\n", keliling);

      break;

    default:
      printf("Tidak ada dalam menu\n");
      break;
  }
}
