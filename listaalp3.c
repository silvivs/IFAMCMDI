#include<stdio.h>

int num, num1, num2, num3, num4, num5;

int main(void){
    while(1){
        printf("informe um inteiro de cinco digitos (-1 para sair)\n> ");
        scanf("%d",&num);

        if ((num!=-1)&&((num<1000)||(num>99999))){
            printf("%d nao eh um numero de cindo digitos!!!\n", num);
            printf("informe um inteiro de cinco digitos (-1 para sair)\n> ");
            scanf("%d",&num);
        }
        else if(num==-1){
            break;
        }
        else{
            num1 = num/10000;
            num2 = (num%10000)/1000;
            num3 = ((num%10000)%1000)/100;
            num4 = (((num%10000)%1000)%100)/10;
            num5 = (((num%10000)%1000)%100)%10;
            if((num1 == num5) && (num2 == num4)){
                printf("%d eh um palindromo!!!\n", num);
            }
            else{
                printf("%d nao eh palindromo!!!\n",num);
            }
        }
    }
}