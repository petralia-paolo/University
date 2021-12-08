#include <stdio.h>
#include <stdlib.h>
int main() {
        int min, max, cont = 0, middle;
        int indovinato = 0;

        printf("Inserisci un intervallo\nMin: ");
        scanf("%d", &min);
        printf("Max: ");
        scanf("%d", &max);

        while (max > min) {

                cont++;
                middle = (min + max) / 2;
                char risposta;
                // il numero che stai pensando è questo?
                printf("Il numero che hai pensato e': %d? \ns/n: ", middle);
                // si -> vince, esce dal while
                scanf("%s", &risposta);
                // no -> ">" o "<" ?
                if (risposta == 's') {
                        indovinato = 1;
                        break;
                }

                printf("Il numero che hai pensato è maggiore (>) o minore (<) di %d?\n", middle);
                scanf("%s", &risposta);
                // se ">" min = middle
                // se "<" max = middle
                if (risposta == '>') min = middle;
                else max = middle;
        }
        if (indovinato) {
                printf("evviva ho indovinato in %d tentativi!\n", cont);
        }
        else {
                printf("Ma hai almeno pensato ad un numero?\n");
        }

        return 0;
}