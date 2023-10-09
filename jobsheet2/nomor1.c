#include <stdio.h>

int main() {
  int harga_awal, harga_akhir, diskon;

  printf("Berapa harga awal ? ");
  scanf("%d", &harga_awal);

  if (harga_awal >= 100000) {
    printf("Anda mendapat diskon 5%%\n");
    diskon = (harga_awal * 5 / 100);
  } else {
    printf("Anda tidak mendapat diskon\n");
    diskon = 0;
  }

  harga_akhir = harga_awal - diskon;
  printf("Yang harus anda bayar : %d\n", harga_akhir);
}