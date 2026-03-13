#include<stdio.h>
typedef struct Paziente{
    char nome[50];
    int eta;
    float peso;
} Paziente;
int main(){
    Paziente s1,s2;
    printf("Inserisci il nome del paziente\n");
    scanf("%[^\n]",&s1.nome);
    printf("Inserisci il peso del paziente\n");
    scanf("%f",&s1.peso);
    printf("Inserisci l'eta' del paziente\n");
    scanf("%d",&s1.eta);
    printf("Resoconto delle cose inserite:\n");
    printf("Nome cognome: %s\t Peso: %f\t Eta': %d\n",s1.nome,s1.peso,s1.eta);
    s2=s1;
    printf("Resoconto delle cose inserite copiate:\n");
    printf("Nome cognome: %s\t Peso: %f\t Eta': %d\n",s2.nome,s2.peso,s2.eta);
    getchar();
    printf("Inserisci il nome del paziente\n");
    scanf("%[^\n]",&s1.nome);
    printf("Resoconto delle cose inserite:\n");
    printf("Nome cognome: %s\t Peso: %f\t Eta': %d\n",s1.nome,s1.peso,s1.eta);
    printf("Resoconto delle cose inserite copiate:\n");
    printf("Nome cognome: %s\t Peso: %f\t Eta': %d\n",s2.nome,s2.peso,s2.eta);
    return 0;
}

