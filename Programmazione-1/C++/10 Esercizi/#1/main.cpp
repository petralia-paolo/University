/*
Scrivere una funzione che prenda in input una matrice quadrata A di short, 
e restituisca un bool che indichi se la diagonale principale è identica 
(procedendo dall’alto verso il basso) alla secondaria.
*/
#include <time.h>
#include <iostream>
#include <string>
using namespace std;
#define N 4

void RiempiMatrice(short (*A)[N]);
bool CheckDiagonali(short (*A)[N]);

int main()
{
  short A[N][N];
  RiempiMatrice(A);
  string returnvalue = CheckDiagonali(A) ? "Le diagonali sono uguali" : "Le diagonali non sono uguali";
  cout << returnvalue << endl;
  return 0;
}

bool CheckDiagonali(short (*A)[N])
{
  int j = N - 1;
  for (int i = 0; i < N; i++)
  {
    if (A[i][i] != A[i][j])
      return false;
    j--;
  }
  return true;
}

void RiempiMatrice(short (*A)[N])
{
  srand(time(0));
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cout << A[i][j] << " ";
      A[i][j] = rand() % 9;
    }
    cout << endl;
  }
}