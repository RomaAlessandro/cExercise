#include<stdio.h>
void scambia_valore(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
}
void scambia_riferimento(int *a, int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int a=3;
    int b=5;
    printf("La variabile a e' uguale a %d\n",a);
    printf("La variabile b e' uguale a %d\n",b);
    scambia_valore(a,b);
    printf("Dopo lo scambio per valore a = %d e b = %d\n",a,b);
    scambia_riferimento(&a,&b);
    printf("Dopo lo scambio per riferimento a = %d e b = %d\n",a,b);
    return 0;
}

