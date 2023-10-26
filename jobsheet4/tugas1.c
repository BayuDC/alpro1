#include <stdio.h>

void bujur_sangkar() {
  float luas, keliling, sisi;

  printf("Sisi      ? ");
  scanf("%f", &sisi);

  luas = sisi * sisi;
  keliling = 4 * sisi;

  printf("Luas      : %.2f\n", luas);
  printf("Keliling  : %.2f\n", keliling);
}
void persegi_panjang() {
  float luas, keliling, panjang, lebar;

  printf("Panjang   ? ");
  scanf("%f", &panjang);
  printf("Lebar     ? ");
  scanf("%f", &lebar);

  luas = panjang * lebar;
  keliling = 2 * (panjang + lebar);

  printf("Luas      : %.2f\n", luas);
  printf("Keliling  : %.2f\n", keliling);
}
void lingkaran() {
  float luas, keliling, jari_jari;

  printf("Jari jari ? ");
  scanf("%f", &jari_jari);

  luas = 3.14 * jari_jari * jari_jari;
  keliling = 3.14 * 2 * jari_jari;

  printf("Luas      : %.2f\n", luas);
  printf("Keliling  : %.2f\n", keliling);
}

int main() {
  printf("Kalkulator Bangun Datar\n\n");
  printf("1. Bujur sangkar\n");
  printf("2. Persegi panjang\n");
  printf("3. Lingkaran\n\n");

  int pilihan;

  printf("Masukkan pilihan : ");
  scanf("%d", &pilihan);
  printf("======================\n");

  switch (pilihan) {
    case 1:
      bujur_sangkar();
      break;
    case 2:
      persegi_panjang();
      break;
    case 3:
      lingkaran();
      break;

    default:
      printf("Tidak ada dalam menu\n");
      break;
  }
}
