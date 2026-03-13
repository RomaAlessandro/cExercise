#include <stdio.h>


int main ()
{
    //alloca un vettore di 10
   double v[10];

   for (int i=0; i<10;i++)
   {
    printf("l'indirizzo di v[%d]:%p\n",i,(void*)&v[i]);

    //&v[i] restituisce l'indirizzo dell'elemento i
    //%p è il formato corretto per stampare indirizzi 
    //(void*) è richiesto dal c per printf
   }
    
    return 0;
}

                                                                                    