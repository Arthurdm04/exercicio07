#include <stdio.h>

int main() {

    /*
    Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. 
    */
   
    int contador = 0; // Inicializa um contador para acompanhar os números pares encontrados
    int numero = 2;  // Inicializa o número a partir do qual você começará a busca
    int soma = 0;    // Inicializa a variável para armazenar a soma dos números pares

    while (contador < 50) {
        soma += numero; // Adiciona o número atual à soma
        numero += 2;   // Avança para o próximo número par
        contador++;    // Incrementa o contador de números pares encontrados
    }

    printf("A soma dos 50 primeiros numeros pares e: %d\n", soma);

    return 0;
}
