/*
Scrivere un metodo che prenda come parametro
formale un cubo (array tridimensionale) C di stringhe,
e restituisca in output una stringa contenente tutte le
desinenze di due caratteri delle stringhe sulla faccia
superiore del cubo C
*/

#include <iostream>
#include <time.h>
using namespace std;
#define N 10
string desinenze(string C[N][N][N])
{
  string output("");
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      string c = C[0][i][j];
      output.append(c.substr(c.length() - 2));
    }
  }
}

int main()
{
  string cubo[N][N][N];
  char caratteri[] = "ABCDEFGHILMNOPQRSTUVZ0123456789abcdefghilmnopqrstuvz";
  srand(time(0));

  for (int k = 0; k < N; k++)
  {
    cout << k + 1 << " dimensione" << endl;

    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
      {
        int len = (rand() % 3) + 1;
        string stringa = "";
        for (int a = 0; a < len; a++)
          stringa += caratteri[rand() % (sizeof(caratteri) - 2)];

        cubo[i][j][k] = stringa;
        cout << cubo[i][j][k] << "\t";
      }
      cout << "\v\v\v";
    }
  }
}