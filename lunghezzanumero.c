#include<stdio.h>
#include<stdlib.h>
int cerca(int *p, int lunghezza,  int numero){
    int c;
    for(c=0; c<lunghezza; c++){
        if (p[c]==numero){
            return numero;
        }
    }
    return -1;
}
int main(){
    int *p;
    int lunghezza;
    int i;
    int numero;
    int cercato;
    // Chiedo la lunghezza del vettore
    printf("Inserisci lunghezza del vettore di interi\n");
    scanf("%d",&lunghezza);
    // Alloco tot elementi del vettore
    p=(int *)malloc(lunghezza*sizeof(int));
    for(i=0; i<lunghezza; i++){
        p[i]=i*2;
    }
    // Mostra
    for(i=0; i<lunghezza; i++){
        printf("Numeri: %d\t", p[i]);
    }
    printf("\n");
    // Chiedo la lunghezza del vettore
    printf("Inserisci il numero da cercare\n");
    scanf("%d",&numero);
    cercato=cerca(p,lunghezza,numero);
    if(cercato != -1){
        printf("Trovato!\n");
    }
    else{
        printf("Non trovato!");
    }
    return 0;
}

