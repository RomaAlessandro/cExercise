#include<stdio.h>

void statistiche_array(int array[], int dim, int *max, int *min, float *media)
{
    if(dim <= 0)
    {*max = *min = 0;
    *media = 0;
    return; }

    *max = *min= array [0];
    *media = array[0];

    for (int i = 1;i<dim;i++) {
        if(array[i]>*max) *max = array [i];
        if(array[i]<*min) *min = array[i];
    
        *media += array[i];

        *media/= dim;
    }
}

    int main() {

        int numeri[] = {10,20,30,40,50};
        int max, min;
        float media;

        statistiche_array(numeri, 5, &max, &min, &media);
        printf("Max:%d,Min:%d,Media:%.2f\n",max,min,media);

        return 0;
    }



