#include <iostream>
#include <conio.h>
using namespace std;

int search(int data[], int n, int k) {
  int position, i, find;

  if (n <= 0) {
    position = -1;
  } else {
    find = 0;
    i = 1;

    while ((i < n-1) && !find) {
      if (data[i] == k) {
        position = i;
        find = 1;
      } else {
        i++;
      }
    }

    if (!find) {
      position = -1;
    }

  } return position;

}

int main() {
  int data[8] = {6, 1, 2, 5, 7, 8, 3, 9};
  int onSearch = 5;
  cout << "Diketahui Array data = {6, 7, 8, 5, 7, 8, 1, 9}" << endl;
  cout << "Posisi " << onSearch << " dalam larik data: " << search(data, 8, onSearch) << "\n";
  getch();
  return 0;
}
