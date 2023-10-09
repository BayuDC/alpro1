#include <stdio.h>

int main() {
  float luas_tanah, luas_bangunan;
  float harga_sat_tnh, harga_sat_bang;
  float harga_tnh, harga_bang, harga_total;
  char tipe;

  printf("Pilih tipe rumah (A/B)? ");
  scanf("%c", &tipe);

  printf("Berapa luas tanah yang diinginkan? ");
  scanf("%f", &luas_tanah);
  printf("Berapa luas bangunan yang diinginkan? ");
  scanf("%f", &luas_bangunan);

  if (tipe == 'A') {
    harga_sat_tnh = 40000;
    harga_sat_bang = 150000;
  } else if (tipe == 'B') {
    harga_sat_tnh = 50000;
    harga_sat_bang = 200000;
  } else {
    printf("Tidak ada dalam menu\n");
  }

  harga_tnh = harga_sat_tnh * luas_tanah;
  harga_bang = harga_sat_bang * luas_bangunan;
  harga_total = harga_bang + harga_tnh;

  printf("\n");
  printf("Harga tanah    : %.2f\n", harga_tnh);
  printf("Harga bangunan : %.2f\n", harga_bang);
  printf("Harga total    : %.2f\n", harga_total);
  printf("\n");
}
