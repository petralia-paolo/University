/*
Scrivere un metodo che prenda come parametri
formali una matrice A n×m di long ed un long x, e
restituisca in output l’indice della colonna di A con il
maggior numero di occorrenze di x. 
*/

#include <iostream>
using namespace std;
#define N 10
#define M 5

int es5(long A[N][M], long x)
{
  int iMax = 0, oMax;
  for (int i = 0; i < M, i++)
  {
    int occorrenze = 0;
    for (int j = 0; j < N; j++)
    {
      if (A[j][i] == x)
      {
        occorrenze++;
      }
    }
    if (oMax < occorrenze)
    {
      iMax = i;
      oMax = occorrenze;
    }
  }
  return iMax;
}