#include <stdio.h>

int main ()
{
    
    float * array;
    int dim;
    int i;

    printf("inserisci il numero di elementi\n");
    scanf("%d",&dim);

    //devo allocare dim elementi

    array=(float *)malloc(sizeof(float)*dim);

    for (i=0;i<dim;i++){
        printf("inserisci l'elementi %d-esimo\n",i+1);
        scanf("%f",&array[i]);
    }

    
    return 0;
}

 