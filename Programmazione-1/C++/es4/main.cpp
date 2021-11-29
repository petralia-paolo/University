/* 
Scrivere un metodo che prenda in input una matrice
di puntatori a stringhe P di dimensioni nm, due short a
e b, ed una stringa s. Il metodo restituisca il valore
booleano true se esiste almeno una colonna in P tale
che la stringa s sia sottostringa di un numero
compreso tra a e b (inclusi) di stringhe della colonna
stessa. PS: Si assuma 0 < a b < n 
*/

#include <iostream>
#include <string>
using namespace std;

bool es4(string **P, int n, int m, short a, short b, string s)
{
  // assumiamo che a > 0 e n > b
  for (int i = 0; i < m; i++)
  {
    int x = 0;
    for (int j = 0; j < n; j++)
    {
      if (P[j][i].find(s) != string::npos)
      {
        x++;
      }
    }
    if (x >= a && x <= b)
      return true;
  }

  return false;
}