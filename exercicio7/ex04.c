#include <stdio.h>

int main() {
    /*
    Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.
    */
   
    int contador = 0;  // Inicializa um contador para acompanhar os múltiplos
    int numero = 1;   // Inicializa o número a partir do qual você verificará os múltiplos

    printf("Os cinco primeiros multiplos de 3 maiores que 0 sao:\n");

    // Enquanto o contador não atingir 5, continue procurando múltiplos
    while (contador < 5) {
        if (numero % 3 == 0) { // Verifica se o número é um múltiplo de 3
            printf("%d\n", numero); // Se for, imprime o número
            contador++; // Incrementa o contador de múltiplos encontrados
        }
        numero++; // Incrementa o número para verificar o próximo valor
    }

    return 0;
}
