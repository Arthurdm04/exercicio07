#include<stdio.h>

int main(){
/*
 Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente. 
*/
int numero, var = 0;

printf("Digite o numero:");
scanf("%i", &numero);

do
{
    printf("%i\n", var);
    var ++;
} while (var <= numero);

}





