
// 2.7 Identifique e corrija os erros cometidos em cada uma
// das instruções. (Nota: pode haver mais de um erro por
// instrução.)

// a) scanf(“%d”,&valor);
// b) printf( “O produto de %d e %d é %d\n",x,y, produto);
// c) somaDosNumeros = primeiroNumero + segundoNumero;
// d) if ( número >= maior ) maior = número;
// e) /* Programa para determinar o maior dentre três inteiros */
// f) Scanf(“%d”,&umInteiro);
// g) printf(“Módulo de %d dividido por %d é %d\n”, x, y, x % y );
// h) if (x = y) printf( %d é igual a %d\n”, x, y );
// i) printf(“A soma é %d\n”,x + y);
// j) printf(“O valor que você digitou é: %d\n",valor);



// 2.12 O que é exibido quando cada uma das seguintes instruções é executada? Se nada for exibido, então responda
// ‘Nada’. Considere que x = 2 e y = 3.

// a) printf( “%d”, x ); 
//  >>> 2
// b) printf( “%d”, x + x ); 
//  >>> 4
// c) printf( “x=” ); 
//  >>> x=
// d) printf( “x=%d”, x ); 
//  >>> x=2
// e) printf( “%d = %d”, x + y, y + x ); 
//  >>> 5 = 5
// f) z = x + y; 
//  Nada. 
// g) scanf( “%d%d”, &x, &y );
//  Nada
// h) /* printf( “x + y = %d”, x + y ); */
//  Nada
// i) printf( “\n” );
//  O cursor pula uma linha. Mas não é exibido nada.


//2.14 Dada a equação y = ax^3 + 7, quais das seguintes alternativas são instruções em C corretas para essa equação (se houver alguma)?

// a) y = a*x*x*x+7;
// e) y = a * ( x * x * x ) + 7;


// 2.17 Imprimindo valores com printf. Escreva um programa que imprima os números de 1 a 4 na mesma linha. Escreva o program utilizando 
// os métodos a seguir.

//a) Uma instrução printf sem especificadores de conversão.
/*
#include<stdio.h>
int main(void){
    printf("1, 2, 3, 4");
    return 0;
}
*/

// b) Uma instrução printf com quatro especificadores de conversão.
/*
#include<stdio.h>
int a, b, c, d;

a = 1;
b = 2;
c = 3;
d = 4;

int main(void){
    printf("%d, %d, %d, %d",a, b, c, d);
    return 0;
}
*/

// c) Quatro instruções printf.

/*
#include<stdio.h>
int main(void){
    printf("1, ");
    printf("2, ");
    printf("3, ");
    printf("4.");
}
*/


// 2.22 O que o código a seguir imprime?
// printf( “*\n**\n***\n****\n*****\n” );

/*

*
**
***
****
*****

*/