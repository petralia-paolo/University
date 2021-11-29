/*
Data una matrice quadrata, stampare i valori contenuti in tutte le diagonali
 parallele alla diagonale secondaria.
*/

#include <iostream>
#include <time.h>
using namespace std;

void stampaParallele(int** m, size_t size) {
  size_t c = size - 1;
  cout << "-----------Diagonale secondaria----------" << endl;
  for (size_t a = 0; a < size; a++) {
    cout << m[a][c] << " ";
    c--;
  }
  cout << endl;

  cout << "------------------Prima------------------" << endl;
  for (size_t i = 0; i < size - 1; i++) {
    size_t riga = 0, colonna = i;
    for (size_t x = i; x >= 0; x--) {
      cout << m[riga][colonna] << " ";
      riga++;
      colonna--;
    }
    cout << endl;
  }

  cout << "------------------Dopo------------------" << endl;

  for (size_t i = 1; i < size; i++) {
    size_t riga = i, colonna = size - 1;
    for (size_t x = i; x < size; x++) {
      cout << m[riga][colonna] << " ";
      riga++;
      colonna--;
    }
    cout << endl;
  }
}

int main() {
  int** matrice;
  size_t size = 4;
  matrice = new int* [size];
  srand(time(0));
  for (size_t i = 0; i < size; i++) {
    matrice[i] = new int[size];
    for (size_t j = 0; j < size; j++) {
      matrice[i][j] = rand() % 9;
      cout << matrice[i][j] << " ";
    }
    cout << endl;
  }

  stampaParallele(matrice, size);

  return 0;
}