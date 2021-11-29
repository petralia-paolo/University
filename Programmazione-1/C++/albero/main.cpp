#include <iostream>
#include <sstream>
using namespace std;
double altezza = 0, nPalline = 0;

int main(int argN, const char **argV)
{
  stringstream(argV[1]) >> altezza;
  stringstream(argV[2]) >> nPalline;
  double probs = nPalline / (altezza * altezza) * 100;
  if (probs > 100)
    probs = 100;
  cout << "L'altezza e' " << altezza << "\nIl numero di palline: " << nPalline << "\nLa probabilita': " << probs << "%" << endl;
  for (int i = 1; i <= altezza; i++)
  {
    int punti = i * 2 - 1, spazi = ((altezza * 2 - 1) - punti) / 2;
    while (spazi--)
      cout << " ";
    while (punti--)
    {
      char x = (rand() % 100) <= (int)probs ? '0' : '*';
      cout << x;
    }
    cout << endl;
  }
  for (int i = 0; i < (altezza * 2 - 2) / 2; i++)
    cout << " ";
  cout << "|" << endl;
  for (int i = 0; i < (altezza * 2 - 4) / 2; i++)
    cout << " ";
  cout << "---" << endl;
}