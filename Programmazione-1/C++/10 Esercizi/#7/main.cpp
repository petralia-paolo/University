/*
Scrivere un metodo che prenda in input una matrice A di float, e restituisca
il valore di somma(min(A,j)), dove min(A, j) è la funzione che restituisce
il minimo elemento presente nella j-esima colonna di A.
N.B.: Non è possibile utilizzare array ausiliari.
*/

#include <iostream>
using namespace std;

float funzione(float(*A)[3], size_t rows, size_t j) {
  float min = A[0][j];
  for (size_t i = 1; i < rows; i++)
    min = A[i][j] < min ? A[i][j] : min;
  return min;
}

int main() {
  float A[][3] = {
    {2.0, 5.2, 12.3 },
    {4.1, 2.1, 3.3 }
  };

  size_t rowsA = sizeof(A) / sizeof(*A);
  cout << funzione(A, rowsA, 2) << endl;
}