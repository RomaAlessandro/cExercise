#include <stdio.h>

int main ()
{
   FILE *fp;

   int vettore []={3,4,5,6};

   fp=fopen("array.dat","wb");

   if(fp!=NULL){
    printf ("file apeto");
    if(fwrite(vettore,sizeof(int),4,fp)!=4);{
        perror("errore di scrittura\n");
    }

   }

   else {

    //printf ("errore apertura file\n");
    perror ("errore apertura file");

   }
    return 0
}

 