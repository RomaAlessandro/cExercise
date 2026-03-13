#include <stdio.h>

char gradino(int voto) //dichiarazione della funzione  che riceve un intero e restitiuisce un caratttere 

if (voto>=80 && voto <=100){
    return 'a'
} else if (voto>=60) {
    return 'b'
} else if (voto >=40) {
    return 'c'
} else if (voto>=0) {
    retun 'd'
} else nan //voto non valido 

main() {
    int voto; //dichiarazione varibile intera per voto 

    printf("inserisci il voto (0-100):");
    scanf("%d", &voto); //legge il valore inserito 

    print f("voto in lettere: %c/n", gradino(voto));//chiama la funzione e stmpa la lettera 

    return 0;//termine corretto 
}