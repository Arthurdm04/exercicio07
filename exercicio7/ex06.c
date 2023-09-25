#include <stdio.h>

int main() {
    int opcao;
    float total = 0.0;

    // Loop principal do programa
    while (1) {
        // Apresenta o menu de frutas disponíveis
        printf("Menu de Frutas Disponíveis:\n");
        printf("1 => ABACAXI – 5,00 a unidade\n");
        printf("2 => MAÇA – 1,00 a unidade\n");
        printf("3 => PERA – 4,00 a unidade\n");
        printf("4 => Finalizar Compra\n");

        // Solicita ao usuário que escolha uma opção
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Fruta: ABACAXI
                printf("Quantas unidades de ABACAXI deseja comprar? ");
                int quantidade_abacaxi;
                scanf("%d", &quantidade_abacaxi);
                total += quantidade_abacaxi * 5.00;
                break;
            case 2:
                // Fruta: MAÇA
                printf("Quantas unidades de MAÇA deseja comprar? ");
                int quantidade_maca;
                scanf("%d", &quantidade_maca);
                total += quantidade_maca * 1.00;
                break;
            case 3:
                // Fruta: PERA
                printf("Quantas unidades de PERA deseja comprar? ");
                int quantidade_pera;
                scanf("%d", &quantidade_pera);
                total += quantidade_pera * 4.00;
                break;
            case 4:
                // Finalizar a compra
                printf("Total da compra: %.2f\n", total);
                return 0; // Sai do programa
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
