/*
 * Scrivere un metodo che prenda come parametri formali
 * una matrice A di stringhe ed uno short w, e restituisca
 * in output un bool che indichi se esiste una riga di A in
 * cui siano presenti almeno due stringhe in cui i primi w
 * caratteri dell’i 
 * dell’altra (nello stesso ordine)
 */

#include <iostream>
using namespace std;

bool funzione(string(*A)[3], size_t rows, size_t cols, short w);

int main() {
  string A[][3] = {
    {"ciao", "aerano", "gay"},
    {"come", "va", "lavita"}
  };
  short doppiavu = 2;
  funzione(A, (sizeof(A) / sizeof(*A)), (sizeof(*A) / sizeof(**A)), doppiavu)
    ? cout << "Si"
    : cout << "No";
  cout << endl;
}

bool funzione(string(*A)[3], size_t rows, size_t cols, short w) {
  for (size_t i = 0; i < rows; i++)
    for (size_t j = 0; j < cols; j++)
      for (size_t k = j + 1; k < cols; k++)
        if (A[i][j].substr(0, w) == A[i][k].substr(0, w))
          return true;
  return false;
}
