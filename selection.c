#include <conio.h>

int main() {
  int array[100], n, i, j, position, t;

  printf("Masukan banyaknya jumlah elemen (panjang array): \n");
  scanf("%d", &n);

  printf("Masukkan bilangan bulat: \n", n);

  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < (n-1); i++) {
    position = i;

    for (j = i + 1; j < n; j++) {
      if (array[position] > array[j]) {
        position = j;
      }
    }

    if (position != i) {
      t = array[i];
      array[i] = array[position];
      array[position] = t;
    }
  }

  printf("Sorted list dengan Ascending: \n");
  for (i = 0; i < n; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}
