#include <stdio.h>
int a;
int b;
int somma(int x, int y){

int a=1,b=2;
printf ("valore di a all'esterno di somma %d\n",a);
printf ("valore di b all'esterno di somma %d\n",b);

return a+b;
}


int main ()
{
    
    //scoping delle variabili 

    int x=1;

    printf("stampa la variabile x %d\n",x);

    if (x>0){
        int y=2;
        printf("stampa y all'interno di if %d\n",x);
    }

    
   

//printf("stampa y fuori di if: %d\n",y);
a=3;
b=5;


printf ("valore di a all'esterno di somma %d\n",a);
printf ("valore di b all'esterno di somma %d\n",b);
printf ("valore di somma %d\n",somma(3,2));
 return 0;
}