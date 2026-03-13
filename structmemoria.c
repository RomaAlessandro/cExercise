#include <stdio.h>
#include <stdlib.h>


typedef struct miastruttura {

    float f;
    char c;
    int v[3];
    } test;
  



int main() {
    test s;

    printf("dimensione della struct:%d\n", sizeof(test));
    printf("indirizzo float f:%p\n",&(s.f));
    printf("indirizzo char c:%p\n",&(s.c));
    printf("indirizzo vettore v:%p",&(s.v));


    return 0;

}

 