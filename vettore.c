#include<stdio.h>
#include<stdlib.h>
int main(){
    int* vettoreInteri;
    int* vettoreInteri2;
    int i;
    // Alloca vettore usando calloc
    vettoreInteri=(int *)calloc(10, sizeof(int));
    printf("Stampa il valore che contiene l'indirizzo di memoria %p\n", &vettoreInteri);
    // Alloca usando malloc
    vettoreInteri2=(int*)malloc(10*sizeof(int));
    for(i=0; i<10; i++){
        vettoreInteri[i]=i*3;
    }
    printf("Stampo il vettore\n");
    for(i=0; i<10; i++){
        printf("Valore di vettoreInteri[%d]: %d\n",i,vettoreInteri[i]);
    }
    free(vettoreInteri);
    printf("Stampa il valore che contiene l'indirizzo di memoria %p dopo free\n", &vettoreInteri);
    printf("Stampo il vettore dopo free\n");
    for(i=0; i<15; i++){
        printf("Valore di vettoreInteri[%d]: %d\n",i,vettoreInteri[i]);
    }
    return 0;
}

