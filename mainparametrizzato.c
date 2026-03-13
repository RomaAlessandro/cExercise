#include <stdio.h>


int main (int argc, char** argv)
{

    printf("il numero di parametri in ingresso:%d",argc);
    for(int c=0;c<argc;c++){

        printf("parametro %c:corrsionde a:%s",c,argv[c]);
    }
   
    
    return 0;
}

                                                                                    