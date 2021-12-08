/*
 * Scrivere un metodo che prenda in input una matrice A di numeri interi e due double w e v,
 * e restituisco il valore booleano true se esiste almeno una colonna di A in cui
 * la media dei suoi elementi e compresa tra w e v.
 * NB: Si assuma che w = v
 */

#include <iostream>
using namespace std;
// Sto assumendo che la dimensione di A sia inserita 
// come size_t dall'utente nel main

// se v e w sono uguali la consegna non ha un cazzo di senso quindi assumerò
// che non lo siano
bool func(int** A, double w, double v, size_t size) {
        for (size_t i = 0; i < size; i++)
        {
                float x = 0.0;
                for (size_t j = 0; j < size; j++)
                        x += a[j][i];
                x / size > w && x / size < v ? return true : continue;
        }
        return false;
}