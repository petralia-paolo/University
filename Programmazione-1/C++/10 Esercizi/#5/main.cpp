/*
Scrivere un metodo che prenda in input una matrice A ed un array B
entrambe di float, e restituisca un boolean che indichi se esiste
in A una coppia di elementi verticali contigui la cui somma è pari
alla somma di due elementi qualsiasi in B.

N.B. : Non è possibile utilizzare array ausiliari.
*/

#include <iostream>
using namespace std;

bool
esisteCoppia(float(*A)[3], size_t rowsA, size_t colsA, float B[5], size_t dimB) {
  for (size_t c = 0; c < colsA; c++)
    for (size_t r = 0; r < rowsA; r++)
      for (size_t i = r + 1; i < rowsA; i++)
        for (size_t x = 0; x < dimB; x++) {
          for (size_t y = x + 1; y < dimB; y++) {
            float sommaB = B[x] + B[y];
            if (A[r][c] + A[i][c] == sommaB) return true;
          }
        }
  return false;
}

int main() {
  float A[][3] = {
    {2.2, 21.1, 12.3},
    {2.1, 2.0, 12.5},
    {6.2, 5.2, 5.5}
  };
  float B[5] = { 1.2 , 3.45, 5.0, 6.0, 5.5 };

  cout <<
    esisteCoppia(
      A,
      (sizeof(A) / sizeof(A[0])),
      (sizeof(*A) / sizeof(**A)),
      B,
      (sizeof(B) / sizeof(*B)))
    << endl;
}

