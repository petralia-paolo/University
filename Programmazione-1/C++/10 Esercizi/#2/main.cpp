/*
Scrivere un metodo che prenda come parametro formale una matrice S
di dimensione n×m di stringhe ed una stringa X, e modific 
‘*’ ogni carattere delle stringhe in S contenenti la sottostringa
X. N.B.: Non è possibile usare substr.
*/

#include <iostream>
#include <string>
using namespace std;
#define n 3
#define m 4

void cinciuncian(string X, string S[n][m])
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (S[i][j].find(X) != string::npos)
      {
        string nuovastringa("");
        for (int k = 0; k < S[i][j].length(); k++)
          nuovastringa.append("*");
        S[i][j] = nuovastringa;
      }
    }
  }
}

int main(int argN, const char *argV[])
{
  string X("ciao");
  string S[n][m] = {
      {"ciao", "sono gay si", "seeh ciao", "luca ravenna "},
      {"luca ciao ravenno", "salame piccante", "si ok le vecchie", "da strapazzo"},
      {"anche a riccardo", "ciao amici addio", "addio", "mondo crudele"}};
  cinciuncian(X, S);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << S[i][j] << " | ";
    }
    cout << endl;
  }

  return 0;
}
