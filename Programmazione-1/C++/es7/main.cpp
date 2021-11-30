/*
Scrivere un metodo che prenda in input tre parametri formali:
una matrice di stringhe S di dimensioni nxm,
un array di caratteri C che contiene elementi distinti,
ed un float w. Il metodo restituisca true se esiste almeno
una riga o una colonna della matrice tale che la percentuale
di caratteri di C presenti in essa e maggiore di w.
*/

#include <iostream>
#include <string>
using namespace std;
#define n 3
#define m 4

bool rowXists(string S[][m], char* C, size_t sizeC, float w) {
	for (size_t i = 0; i < n; i++) {
		float rtimes_c = 0, ctimes_c = 0, rtotal_length = 0, ctotal_length = 0;
		for (size_t j = 0; j < m; j++) {
			for (size_t k = 0; k < S[i][j].length(); k++)
				for (size_t a = 0; a < sizeC; a++) {
					if (C[a] == S[i][j][k])rtimes_c++;
					if (C[a] == S[j][i][k])ctimes_c++;
				}
			rtotal_length += S[i][j].length();
			ctotal_length += S[j][i].length();
		}
		if ((ctimes_c / ctotal_length) * 100 > w
			|| (rtimes_c / rtotal_length) * 100 > w) return true;
	}
	return false;
}

int main() {
	string S[n][m] = {
		{"dsa", "daf", "eqwewq", "safasfsa"},
		{"ca", "ccdasdsa", "cascsacas", "gasgacascasca"},
		{"dads", "slol", "lll", "irlybiguwalmd"}
	};
	char C[] = { 'c', 'a', 'r','l','e','t','t','o' };
	float w = 50; // % 
	string toPrint = rowXists(S, C, (sizeof(C) / sizeof(*C)), w)
		? "Esiste"
		: "Non esiste";
	cout << toPrint << endl;
	return 0;
}

