/*
Due stringhe si dicono simili se esse coincidono in almeno p posizioni,
dove p è la metà (troncata) della lunghezza della stringa piùa. 
Es.: Le stringhe “abcdefabcdef ” e “zbcaafacz” sono simili perché coincidono
agli indici 1,2,5,6 ed è p=4). Scrivere un metodo che prenda in input una
matrice A di puntatori a stringhe, e restituisca un boolean che indichi se
esiste una colonna di A in cui sono presenti almeno due stringhe simili.
N.B.: Attenzione alle eventuali stringhe mancanti in A (con puntatore a null).
*/

#include <iostream>
#include <string.h>
using namespace std;

bool funzione(char* (*A)[3], size_t rows, size_t cols) {
  for (size_t i = 0; i < rows; i++)
    for (size_t j = 0; j < cols; j++) {
      if (A[i][j] == NULL) continue;
      for (size_t k = j + 1; k < cols; k++) {
        if (A[i][k] == NULL) continue;
        size_t p = min(strlen(A[i][j]), strlen(A[i][k])) / 2;
        char* str = strlen(A[i][j]) < strlen(A[i][k]) ? A[i][j] : A[i][k];
        int occorrenze = 0;
        cout << A[i][j] << " , " << A[i][k] << endl;
        for (size_t a = 0; a < strlen(str); a++) {
          A[i][j][a] == A[i][k][a] && occorrenze++;
          cout << (A[i][j][a] == A[i][k][a]) << "\n";
        }
        cout << "p: " << p << " occorrenze: " << occorrenze << endl;
        if (occorrenze >= p) return true;
      }
    }
  return false;
}

int main() {
  char* A[][3] = {
    {(char*)"ciao", (char*)"sono", (char*)"carlo"},
    {(char*)"sed", (char*)"face", (char*)"when"},
    {(char*)"abcdefabcdef", (char*)"zbcaafacz", (char*)"ravenna"},
    {(char*)"ras", NULL, (char*)"checcoglione"},
  };
  size_t rowsA = (sizeof(A) / sizeof(*A)), colsA = (sizeof(*A) / sizeof(**A));

  cout << funzione(A, rowsA, colsA) << endl;
}

