// calcola la media dei numeri inseriti dall'utente che siano multipli di 5 e definiti da
// un valore N

#include <iostream>
using namespace std;
int main()
{
  int media = 0, k = 0, n = 0;
  cout << "Inserisci N: ";
  cin >> n;
  cout << endl;

  for (unsigned long i = 0; i < n; i++)
  {
    int x;
    cout << "inserisci il valore " << i + 1 << ": ";
    cin >> x;
    if (x % 5 == 0 && x != 0)
    {
      k++;
      media += x;
    }
  }

  cout << "La media e': " << media / k << endl;
}