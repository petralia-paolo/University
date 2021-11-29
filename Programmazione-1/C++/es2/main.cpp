/*
  Due stringhe si dicono sorelle se hanno lo stesso
  numero di vocali. Scrivere un metodo che prenda in
  input una matrice A di puntatori a stringhe, e
  restituisca un boolean che indichi se esiste una
  colonna di A in cui sono puntate almeno due stringhe
  sorelle.
*/

#include <string>
using namespace std;
#define N 10;
#define M 15;

int calcolaVocali(string str)
{
  int conta = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      conta++;
  }
  return conta;
}
bool stringheSorelle(string A[M][N])
{
  for (int i = 0; i < N; i++)
  {
    int arrCol[N];
    for (int j = 0; j < M)
    {
      arrCol[j] = calcolaVocali(*A[i][j]);
    }
    for (int k = 0; k < sizeof(arrCol) / sizeof(arrCol[0]); k++)
    {
      for (int d = 0; d < sizeof(arrCol) / sizeof(arrCol[0]); d++)
      {
        if (arrCol[k] == arrCol[d])
          return true;
      }
    }
  }
  return false;
}
