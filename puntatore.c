#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int a;
    int *p;

    a=5;

    printf("valore di a:%d, l'indirizzo di a:%p\n",a,&a);

    p=&a;
    
    printf ("valore di p:%p, l'indirizzo di p:%p\n",p,&p)

    *p=8;

    printf("valore di a:%d,l'indirizzo di a:%p\n",a,&a);
    
    return 0;
}

 