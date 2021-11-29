#include <iostream>
#include <time.h>
using namespace std;
#define n 5

float* metodo(unsigned int(*M)[n]) {
  static float arr[n];
  for (size_t i = 0; i < n; i++) {
    if (i % 2 == 0) {
      float minimo = M[0][i];
      for (size_t j = 1; j < n; j++)
        minimo = M[j][i] < minimo ? M[j][i] : minimo;
      arr[i] = minimo;
    }
    else if (i % 2 != 0 && i % 3 != 0) {
      float media = 0;
      int con = 0;
      for (size_t j = 0; j < n;j++)
        if (M[i][j] % 3 == 0 && M[i][j] != 0) {
          media += M[i][j];
          con++;
        }
      if (con > 0)
        arr[i] = media / con;
    }
    else arr[i] = arr[i - 2] + arr[i - 1];
  }
  return arr;
}

int main() {
  unsigned int M[n][n];
  srand(time(0));
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      M[i][j] = rand() % 9;
      cout << M[i][j] << " ";
    }
    cout << endl;
  }
  cout << "-------" << endl;
  float* c;
  c = metodo(M);

  for (size_t i = 0; i < n; i++)
    cout << *(c + i) << " ";

  cout << endl;

  return 0;
}