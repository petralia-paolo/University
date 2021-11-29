/*
Scrivere un metodo che prenda in input una matrice A di stringhe
ed una stringa Str, e restituisca un boolean che indichi se Str è
sottostringa di tutte le stringhe presenti in una qualche colonna di A.
*/

#include <iostream>
#include <string>
using namespace std;

bool funzione(string(*A)[3], string str, size_t rows, size_t cols) {
  for (size_t i = 0; i < cols; i++) {
    bool trovata = true;
    for (size_t j = 0; j < rows; j++)
      if (A[j][i].find(str) == string::npos)
        trovata = false;
    if (trovata) return true;
  }
  return false;
}

int main() {

  string A[][3] = {
    {"ciao", "sono", "parecchio"},
    {"uno", "stupido", "pazzo"}
  };
  string str = "o";
  size_t rowsA = sizeof(A) / sizeof(*A);
  size_t colsA = sizeof(*A) / sizeof(**A);

  cout << funzione(A, str, rowsA, colsA) << endl;
  return 0;
}