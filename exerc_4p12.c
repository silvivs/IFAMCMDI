// Exercício 4.12: calculando a soma de inteiros pares de 2 a 30

#include<stdio.h>

int soma = 0, num;

int main(void){

    for (int i=0;i<=30;i++){
        if ((i%2)==0){
            soma += i;
        }
    }
    printf("a soma dos inteiros pares de 2 a 30 eh %d\n", soma);
    return 0;
}