#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_segreto;
    int tentativo;
    int max_tentativi = 6;

    srand(time(NULL));

    numero_segreto = rand() % 100 + 1;

    printf("Ho scelto un numero tra 1 e 100.\n");

    for (int i = 1; i <= max_tentativi; i++) {
        printf("Tentativo %d/%d: inserisci un numero: ", i, max_tentativi);
        scanf("%d", &tentativo);

        if (tentativo < numero_segreto) {
            printf("Troppo piccolo!\n");
        } else if (tentativo > numero_segreto) {
            printf("Troppo grande!\n");
        } else {
            printf("Bravo! Hai indovinato in %d tentativi!\n", i);
            return 0;
        }
    }

    printf("Hai perso! Il numero segreto era %d.\n", numero_segreto);

    return 0;
}
