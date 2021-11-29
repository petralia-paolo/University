/* Data una sequenza S di valori, una salita è una qualunque
sottosequenza di elementi di S consecutivi e non - decrescenti. Scrivere
un metodo che prenda come parametro formale un array S di long e restituisca
l’indice del primo elemento della salita più lunga in S. */

#include <iostream>
using namespace std;

size_t
ottieniIndice(long* S, size_t size);

int main()
{
  true && cout << "CIAO" << endl;
  false && cout << "suca" << endl;
  long S[] = { 1,2,3,2,3,5,6,4,6,7 };

  cout << ottieniIndice(S, (sizeof(S) / sizeof(S[0]))) << endl;
}

size_t ottieniIndice(long* S, size_t size)
{
  size_t index = 0, tempindex = 0, conta = 0, temp = 0;

  for (size_t i = 1; i < size; i++) {
    if (S[i] > S[i - 1]) temp++;
    else {
      if (temp > conta) {
        conta = temp;
        temp = 0;
        index = tempindex;
      }
      tempindex = i;
    }
  }

  return index;

}
