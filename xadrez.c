#include <stdio.h>

// Essa função faz a torre se mover para a direita de maneira recursiva.
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Essa função faz a Rainha se mover para a esquerda de maneira recursiva.
void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Essa função faz o bispo se mover para cima e para a direita, simulando um movimento na diagonal.
void moverBispo(int casas)
{
    if (casas > 0)
    {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

int main()
{
    // Chama a função moverTorre e move a torre 5 casas para a direita.
    printf("\nMovimento da Torre:\n");
    moverTorre(5);

    // Chama a função moverBispo e move o bispo 5 casas para cima e para a direita (diagonal).
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // Chama a função moverRainha e move a rainha 8 casas para a esquerda.
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // O cavalo se move em L (duas casas para cima e uma para a direita).
    printf("\nMovimento do Cavalo:\n");
    for (int cima = 0; cima < 2; cima++) {
        printf("Cima\n");
    }
    for (int direita = 0; direita < 1; direita++) {
        printf("Direita\n");
    }
    
    return 0;
}