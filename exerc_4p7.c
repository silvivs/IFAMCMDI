// Exercício 4.7: escreva estruturas for que imprimam a seguinte sequência de valores
// a) 1, 2, 3, 4, 5, 6, 7
// b) 3, 8, 13, 18, 23
// c) 20, 14, 8, 2, -4, -10
// d) 19, 27, 35, 43, 51

#include<stdio.h>

int main(void){

    printf("Imprimindo valores de 1 a 7\n");
    for (int i=1;i<=7;i++){
        printf("%d, ",i);
    }

    printf(".\n");

    printf("Imprimindo valores crescentes de 5 em 5 unidades entre 3 e 23\n");
    for (int i=3;i<=23; i+=5){
        printf("%d, ", i);
    }

    printf("\n");

    printf("Imprimindo valores decrescentes de 6 em 6 entre 20 e -10\n");
    for (int i=20;i>=-10;i-=6){
        printf("%d, ", i);
    }

    printf("\n");

    printf("Imprimindo valores crescentes de 8 em 8 entre 19 e 51\n");
    for (int i=19;i<=51;i+=8){
        printf("%d, ", i);
    }

    printf("\n");

    return 0;
}