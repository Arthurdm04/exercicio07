#include<stdio.h>

int main(){
/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. 
*/
int numero;

printf("Digite o numero:");
scanf("%i", &numero);

do
{
    printf("%i\n", numero);
    numero --;
} while (numero != 0);

printf("0\n");

}






