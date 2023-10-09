#include <stdio.h>

int main() {
  int menu;

  printf("PILIHAN MENU HARI INI\n");
  printf("[1] SOTO\n");
  printf("[2] BAKSO\n");
  printf("Pilihan anda: ");
  scanf("%d", &menu);

  switch (menu) {
    case 1:
      printf("Anda telah memilih SOTO");
      break;
    case 2:
      printf("Anda telah memilih BAKSO");
      break;

    default:
      printf("Anda salah pilih");
      break;
  }

  printf("\n\n");
}