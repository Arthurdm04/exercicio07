#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    float salario;
    int total_habitantes = 0;
    int total_feminino_castanho_castanho = 0;

    printf("Digite os dados dos habitantes (ou idade -1 para encerrar):\n");

    while (1) {
        printf("\nHabitante %d:\n", total_habitantes + 1);

        // Validação do sexo
        do {
            printf("Sexo (m/f): ");
            scanf(" %c", &sexo);
        } while (sexo != 'm' && sexo != 'f');

        // Validação da cor dos olhos
        do {
            printf("Cor dos olhos (a/v/c/p): ");
            scanf(" %c", &olhos);
        } while (olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p');

        // Validação da cor dos cabelos
        do {
            printf("Cor dos cabelos (l/c/p/r): ");
            scanf(" %c", &cabelos);
        } while (cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r');

        // Validação da idade
        do {
            printf("Idade (10-100): ");
            scanf("%d", &idade);
        } while (idade < 10 || idade > 100);

        // Validação do salário
        do {
            printf("Salario (nao aceita valores negativos): ");
            scanf("%f", &salario);
        } while (salario < 0);

        // Verifica se a habitante é do sexo feminino, com idade entre 18 e 35 anos, olhos e cabelos castanhos
        if (sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c') {
            total_feminino_castanho_castanho++;
        }

        // Verifica se o usuário deseja encerrar
        if (idade == -1) {
            break;
        }

        total_habitantes++;
    }

    if (total_habitantes == 0) {
        printf("Nenhum habitante registrado.\n");
    } else {
        float porcentagem = (float)total_feminino_castanho_castanho / total_habitantes * 100;
        printf("Porcentagem de habitantes do sexo feminino, entre 18 e 35 anos, com olhos e cabelos castanhos: %.2f%%\n", porcentagem);
    }

    return 0;
}
