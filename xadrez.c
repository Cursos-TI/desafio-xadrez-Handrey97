#include <stdio.h>

// Definindo constantes para a quantidade de movimentos
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_RAINHA 8

int main() {
    // Variável para o número de movimentos
    int i;

    // -------------------
    // Movimentação da Torre
    // -------------------
    printf("Movimentação da Torre (5 casas para a direita):\n");
    
    // Usando o laço for para movimentar a torre para a direita
    for (i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }

    // -------------------
    // Movimentação do Bispo
    // -------------------
    printf("\nMovimentação do Bispo (5 casas na diagonal para cima e à direita):\n");

    // Usando o laço while para movimentar o bispo na diagonal superior direita
    i = 0; // Resetando a variável de controle
    while (i < MOVIMENTO_BISPO) {
        printf("Cima, Direita\n");
        i++;
    }

    // -------------------
    // Movimentação da Rainha
    // -------------------
    printf("\nMovimentação da Rainha (8 casas para a esquerda):\n");

    // Usando o laço do-while para movimentar a rainha para a esquerda
    i = 0; // Resetando a variável de controle
    do {
        printf("Esquerda\n");
        i++;
    } while (i < MOVIMENTO_RAINHA);

    return 0;
}
