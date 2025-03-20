#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre = 0, mov_Torre = 5;
    int bispo = 0, mov_Bispo = 5;
    int rainha = 0, mov_Rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo:\n");
    for (bispo; bispo < mov_Bispo; bispo++)
    {
        printf("Bispo se moveu para a diagonal: Cima - Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre:\n");
    while (torre < mov_Torre)
    {
        printf("Torre se moveu para a direita.\n");
        torre++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação da Rainha:\n");
    do
    {
        printf("Rainha se moveu para a esquerda.\n");
        rainha++;
    }
    while (rainha < mov_Rainha);

    return 0;
}
