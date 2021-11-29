/*
  Un santone induista si trova nella regione indiana del
  Rajasthan, quest'ultima simulata con una matrice
  quadrata di boolean in cui il valore true indica la
  presenza di un libro sacro. Scrivere un metodo che
  prenda in input una matrice di boolean e restituisca il
  numero di libri raccolti dal santone che, partendo dal
  centro della regione, esegue un movimento casuale
  unitario alla volta in una delle quattro direzioni prima
  che egli sia traviato dalle usanze oltre colonne. 
*/

#include <iostream>
#include <ctime>
using namespace std;
#define N 11
void riempiMatrice(bool matrice[][N])
{
  cout << "Matrice di partenza:" << endl;
  srand((unsigned)time(0));
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      matrice[i][j] = (rand()) % 2 == 0;
      cout << matrice[i][j] << " ";
    }
    cout << endl;
  }
  cout << "----------------------------------------------------" << endl;
}

int santone(bool matrice[][N], int n)
{

  int i = n / 2, j = n / 2, libri = 0;
  while (i <= n && i >= 0 && j <= n && j >= 0)
  {
    if (matrice[i][j])
    {
      libri++;
      matrice[i][j] = false;
    }
    bool incrementa = (rand()) % 2 == 0;
    bool isI = (rand()) % 2 == 0;
    incrementa ? isI ? i++ : j++ : isI ? i--
                                       : j--;
  }
  return libri;
}

int main()
{
  bool matrice[N][N];
  riempiMatrice(matrice);
  int libri = santone(matrice, sizeof(matrice) / sizeof(matrice[0]));
  cout << "Il santone ha raccolto " << libri << " libri" << endl;
  return 0;
}