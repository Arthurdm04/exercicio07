#include<stdio.h>

int main(){
/*
Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). 
*/

int numero, impar;

printf("Digite um numero:");
scanf("%d", &numero);

for(impar = 1; impar <= numero; impar +=2){
    printf("%d\n", impar);
}


}
