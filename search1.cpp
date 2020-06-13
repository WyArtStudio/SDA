#include <iostream>
#include "conio.h"
using namespace std;

int binarySearch(int data[], int n, int k) {
  int available, top, down, mid, position;
  available = 0;
  down = 0;
  top = n-1;

  while (top >= down) {
    mid = (top + down) / 2;

    if (k > data[mid]) {
      down = mid + 1;
    } else {
      if (k < data[mid]) {
        top = mid - 1;
      } else {
        available = 1; // Angka yang dicari berhasil ditemukan
        position = mid;
        down = top + 1; // Mengakhiri perulangan
      }
    }
  }

  if (!available) {
    position = -1;
  } return position;

}

int main() {
  int data[] = {1,2,3,4,5,7,8,10,13,14,15};
  int onSearch = 13;
  cout << "Diketahui array data = {1,2,3,4,5,7,8,10,13,14,15}" << endl;
  cout << "Posisi " << onSearch << " dalam array data: " << binarySearch(data, 11, onSearch) << "\n";
  getch();
  return 0;
}
