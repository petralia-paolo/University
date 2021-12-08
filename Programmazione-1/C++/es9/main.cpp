/*
 * L'utente definisce un intervallo di ricerca [min max]
 * pensa a un numero n compreso tra min max
 * prendere ispirazione dalla ricerca dicotomica
 */

#include <iostream>
using namespace std;

int main() {
        int min, max, cont = 0, middle, indovinato = 0;
        cout<<"inserisci un intervallo\nMIn:";
        cin>>min;
        cout<<"Max:";
        cin>>max;

        while(max > min){
            char risposta = '';
            cont++;
            middle = (min+max)/2;
            while(tolower(risposta) != 's' && tolower(risposta) != 'n'){
                cout<<"Il numero che hai pensato e': "<<middle <<" ?"<<endl<<"s/n";
                cin>>risposta;
            }
            if(risposta == 's'){
                indovinato = 1;
                break;
            }

            while(risposta != '<' && risposta != '>'){
                cout<<"il numero che hai pensato e' maggiore (>) o minore (<) di "<<middle<<" ?";
                cin>>risposta;
            }

            if(risposta == '>') min = middle;
            else max = middle;

        }
        if(indovinato) cout<<"Evviva ho indovinato in "<<cont<<" tentativi"<<endl;
        else cout<<"Ma hai almeno pensato ad un numero?"<<endl;
}