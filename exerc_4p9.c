// Exercício 4.9: Soma de uma sequência de inteiros

#include<stdio.h>

int soma = 0, lim, num;

int main(void){
    printf("Informe a quantidade de valores a ser lida\n> ");
    scanf("%d", &lim);
    for(int i=0;i<lim;i++){
        printf("Informe um valor\n> ");
        scanf("%d", &num);
        soma += num;
    }
     printf("A soma dos valores lido eh %d", soma);

     return 0;
}