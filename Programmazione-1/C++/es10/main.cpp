/*
Scrivere un metodo che prenda in input tre parametri formali: una matrice di
puntatori a stringhe A di dimensioni nxm, uno short k ed una stringa s.
Il metodo restituisca un array di bool di dimensione n in cui il singolo
elemento di indice i assume valore true se la stringa s e sottostringa di almeno
k stringhe della riga i-esima della matrice A.
*/

#include <iostream>
#include <string>
using namespace std;

bool* func(string** A, size_t n, size_t m, short k, string s) {
        bool r[n];
        for (size_t i = 0; i < n; i++) {
                int x = 0;
                for (size_t j = 0; j < m; j++) {
                        if (A[i][j].find(s) != string::npos)
                                x++;
                }
                r[i] = (r[i] >= k);
        }
        return r;
}