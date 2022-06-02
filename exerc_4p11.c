// Exercício 4.11: ache o menor

#include<stdio.h>

int lim, num, maior = 0, menor = 0, aux;

int main(void){

    printf("Informe a quantidade de numeros que serao lidos\n> ");
    scanf("%d", &lim);

    int lista[lim];

    for (int i=0;i<lim;i++){
        printf("Informe um valor\n> ");
        scanf("%d", &num);
        lista[i] = num;
    }

    for (int i=0;i<lim-1;i++){
        maior = lista[i];
        if(maior>lista[i+1]){
            lista[i] = maior;
        }
        else if(maior<lista[i+1]){
            lista[i] = lista[i+1];
            lista[i+1] = maior;
        }
    }

    printf("o menor numero eh %d\n", lista[lim-1]);

    return 0;
}