#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void bispo(int movAmount, int position, int vector) {
    if (position == movAmount) return;

    if (vector == 0) {
        printf("Cima\n");
        bispo(movAmount, position, 1);
        return;
    }

    if (vector == 1) {
        printf("Direita\n");
        bispo(movAmount, position + 1, 0);
        return;
    }
}
void torre(int movAmount, int position) {
    if (position == movAmount) return;

    printf("Direita\n");
    torre(movAmount, position + 1);
}
void rainha(int movAmount, int position) {
    if (position == movAmount) return;

    printf("Esquerda\n");
    rainha(movAmount, position + 1);
}
void cavalo(int movAmount, int position, int vector) {
    if (position == movAmount) return;

    if (vector == 0) {
        printf("Cima\n");
        printf("Cima\n");
        cavalo(movAmount, position, 1);
        return;
    }

    if (vector == 1) {
        printf("Direita\n");
        cavalo(movAmount, position + 1, 0);
        return;
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movAmount;

    printf("Digite o número de casas que a peça pode se mover: ");
    scanf("%d", &movAmount);

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimentação do Bispo: %d casas na diagonal\n", movAmount);

    int indiceBispo = 0;
    while (indiceBispo < movAmount) {
        printf("Cima\n");
        printf("Direita\n");
        indiceBispo++;
    }

    printf("----------------------------------\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movimentação da Torre: %d casas\n", movAmount);

    for (int i = 0; i < movAmount; i++) {
        printf("Direita\n");
    }

    printf("----------------------------------\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimentação da Rainha: %d casas\n", movAmount);

    int indiceRainha = 0;
    do {
        printf("Esquerda\n");
        indiceRainha++;
    } while (indiceRainha < movAmount);

    printf("----------------------------------\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Movimentação do Cavalo: %d casas\n", movAmount);

    for (int i = 0; i < movAmount; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    printf("----------------------------------\n");
    printf("Nível Mestre - Funções Recursivas e Loops Aninhados\n");

    printf("Movimentação do Bispo: %d casas na diagonal\n", movAmount);
    bispo(movAmount, 0, 0);

    printf("----------------------------------\n");

    printf("Movimentação da Torre: %d casas\n", movAmount);
    torre(movAmount, 0);

    printf("----------------------------------\n");

    printf("Movimentação da Rainha: %d casas\n", movAmount);
    rainha(movAmount, 0);

    printf("----------------------------------\n");

    printf("Movimentação do Cavalo: %d casas\n", movAmount);
    cavalo(movAmount, 0, 0);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
