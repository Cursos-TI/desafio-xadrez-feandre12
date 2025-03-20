#include <stdio.h>

int main()
{
    // Variáveis de movimentação das peças do xadrez, além de variáveis para linha e coluna do tabuleiro
    int movimento_cima, movimento_baixo, movimento_direita, movimento_esquerda, movimento_diagonal;
    int linha, coluna;

    // Implementação de Movimentação do Bispo
    // Tabuleiro de Xadrez: https://i.imgur.com/CLxvjac.png
    // O Bispo irá se mover da posição C1 para H6.
    linha = 1; // iniciando na parte inferior do tabuleiro, linha 1
    coluna = 3; // iniciando na coluna C do tabuleiro, terceira coluna da esquerda para direita

    printf("\nMovimentação do Bispo:\n");
    printf("Posição inicial do Bispo: (coluna: C, linha: 1)\n");

    // Loop for para movimentar o Bispo na diagonal até (H6)
    for (movimento_diagonal = 0; movimento_diagonal < 5; movimento_diagonal++)
    {
        linha++;  // Move uma linha para cima
        coluna++; // Move uma coluna para a direita

        printf("Bispo movendo na diagonal: (coluna: %c, linha: %d)\n", 'A' + (coluna - 1), linha);
        for (int i = 0; i < 1000000000; i++)
        {
            // Apenas para simular um atraso
        }
    }

    // Implementação de Movimentação da Torre
    // Tabuleiro de Xadrez: https://i.imgur.com/CLxvjac.png
    // A Torre irá se mover da posição B4 para G4.
    linha = 4; // iniciando parte inferior do tabuleiro, linha 4
    coluna = 2; // iniciando na coluna B do tabuleiro, segunda coluna da esquerda para direita

    printf("\nMovimentação da Torre:\n");
    printf("Posição inicial da Torre: (coluna: B, linha: 4)\n");

    // Loop while para movimentar a Torre para direita até (G4)
    while (coluna < 7)
    {
        coluna++; // Move para a direita

        printf("Torre movendo para a direita: (coluna: %c, linha: %d)\n", 'A' + (coluna - 1), linha);
        for (int i = 0; i < 1000000000; i++)
        {
            // Apenas para simular um atraso
        }
    }

    // Implementação de Movimentação da Rainha
    // Tabuleiro de Xadrez: https://i.imgur.com/CLxvjac.png
    // A Rainha irá se mover da posição H3 para A3.
    linha = 3; // iniciando na parte inferior do tabuleiro, linha 3
    coluna = 8; // iniciando na coluna H do tabuleiro, primeira coluna da direita para esquerda

    printf("\nMovimentação da Rainha:\n");
    printf("Posição inicial da Rainha: (coluna: H, linha: 3)\n");

    // Loop do-while para movimentar a Rainha para esquerda até (A3)
    do
    {
        coluna--; // Move para a esquerda

        printf("Rainha movendo para a esquerda: (coluna: %c, linha: %d)\n", 'A' + (coluna - 1), linha);
        for (int i = 0; i < 1000000000; i++)
        {
            // Apenas para simular um atraso
        }
    }
    while (coluna > 1); // 1 corresponde à coluna A do tabuleiro

    // Implementação de Movimentação do Cavalo
    // Tabuleiro de Xadrez: https://i.imgur.com/CLxvjac.png
    // O Cavalo irá se mover da posição B8 para A6.
    linha = 8; // iniciando na parte superior do tabuleiro, linha 8
    coluna = 2; // iniciando na coluna B do tabuleiro, segunda coluna da esquerda para direita

    printf("\nMovimentação do Cavalo:\n");
    printf("Posição inicial do Cavalo: (coluna: B, linha: 8)\n");

    // Loop em for para movimentar o cavalo duas casas para baixo
    for (movimento_baixo = 0; movimento_baixo < 2; movimento_baixo++)
    {
        linha--; // Movendo para baixo
        printf("Cavalo movendo para baixo: (coluna: %c, linha: %d)\n", 'A' + (coluna - 1), linha);
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 1000000000; i++)
        {
            // Apenas para simular um atraso
        }
    }

    // Loop em while para movimentar o cavalo uma casa para a esquerda
    // Variável de início
    movimento_esquerda = 0;
    while (movimento_esquerda < 1)
    {
        coluna--; // Movendo para a esquerda
        printf("Cavalo movendo para a esquerda: (coluna: %c, linha: %d)\n", 'A' + (coluna - 1), linha);
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 1000000000; i++)
        {
            // Apenas para simular um atraso
        }
        movimento_esquerda++;
    }   

    return 0;
}