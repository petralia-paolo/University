/*
Scrivere una funzione che prenda come parametro una matrice A di dimensione N x M
di stringhe e restituisca una stringa che contenga tutte le vocali delle stringhe
nelle posizioni A[i][j] tali che A[i][j] è più lunga di A[j%N][i%M] di almeno
i+j unità
*/
#include <iostream>
#include <string>
using namespace std;
#define N 3
#define M 4

string func(string(*A)[M]) {
        string str = "";
        char vocali[] = { 'a', 'e', 'i','o','u' };
        for (size_t i = 0; i < N; i++)
                for (size_t j = 0; j < M; j++)
                        if (A[i][j].length() - (i + j) > A[j % N][i % M].length())
                                for (size_t k = 0; k < A[i][j].length(); k++)
                                        for (size_t h = 0; h < 5; h++)
                                                if ((char)tolower(A[i][j][k]) == vocali[h])
                                                        str += A[i][j][k];
        return str;
}

int main() {

        string arr[][M] = {
                {"aes", "aaassasas", "aaaa", "aaaaaaaa"},
                {"adaed", "deaeaea", "eaeae", "ihdiasnjn"},
                {"hehehete", "aeaeaeae", "IOJidojsalk", "erere"}
        };
        cout << func(arr) << endl;
}

