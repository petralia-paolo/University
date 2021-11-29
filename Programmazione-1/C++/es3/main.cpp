/*
  Scrivere un metodo che prenda in input un
  parametro formale matrice quadrata Q di interi ed un
  double w, e restituisca un valore booleano true se
  esiste almeno una colonna della matrice Q tale che il
  rapporto tra la somma degli elementi della colonna
  stessa e la somma degli elementi della diagonale
  secondaria di Q sia maggiore di w. 
*/

#include <iostream>
#include <ctime>
#include <sstream>
using namespace std;
int N = 0;

int **creaMatrice(int **matrice)
{
  srand(time(0));
  for (int i = 0; i < N; i++)
  {
    matrice[i] = new int[N];

    for (int j = 0; j < N; j++)
    {
      *(*(matrice + i) + j) = rand() % 9;
      cout << *(*(matrice + i) + j) << " ";
    }
    cout << endl;
  }
  return matrice;
}

bool colSumExist(double w, int **matrice, int size)
{
  double dSum = 0;
  int j = size - 1;
  for (int i = 0; i < size; i++)
  {
    dSum += matrice[i][j];
    j--;
  }
  cout << "dSum = " << dSum << endl;

  for (int i = 0; i < size; i++)
  {
    double colSum = 0;
    for (int j = 0; j < size; j++)
    {
      colSum += matrice[j][i];
    }
    cout << "colSum colonna " << i << ": " << colSum << " colSum/dSum: " << colSum / dSum << endl;
    if (colSum / dSum > w)
    {
      return true;
    }
  }
  return false;
}

int main(int argc, char const *argv[])
{
  stringstream str(argv[1]);
  str >> N;
  double w;
  int **matrice = creaMatrice(new int *);
  cout << "---------------------" << endl
       << "inserisci un double: ";
  cin >> w;
  if (colSumExist(w, matrice, N))
  {
    cout << "Esiste" << endl;
    return 0;
  }
  cout << "Non esiste" << endl;
  return 1;
}
