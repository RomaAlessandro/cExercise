#include <stdio.h>

// prototipo della funzione
int somma(int a, int b);

int main() {                         

    int a, b, c;

    a = 3;
    b = 5;
    c = 0;

    printf("Prima della chiamata c vale: %d\n", c);

    // chiamata funzione 
    c = somma(a, b);

    printf("Dopo la chiamata c vale: %d\n", c);

    return 0;
}

int somma(int a, int b) {
    int c;
    c = a + b;
    return c;
}
