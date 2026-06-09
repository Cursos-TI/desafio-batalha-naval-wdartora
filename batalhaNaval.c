#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiroNovato[5][5] = {0};
    const int tamanhoNavio = 3;
    int i;
    int j;

    // Navio horizontal: linha 1, colunas 0 a 2
    for (j = 0; j < tamanhoNavio; j++) {
        tabuleiroNovato[1][j] = 3;
    }

    // Navio vertical: coluna 4, linhas 2 a 4
    for (i = 2; i < 2 + tamanhoNavio; i++) {
        tabuleiroNovato[i][4] = 3;
    }

    printf("=== Nivel Novato ===\n");

    printf("\nCoordenadas do navio horizontal:\n");
    for (j = 0; j < tamanhoNavio; j++) {
        printf("Linha: %d, Coluna: %d\n", 1, j);
    }

    printf("\nCoordenadas do navio vertical:\n");
    for (i = 2; i < 2 + tamanhoNavio; i++) {
        printf("Linha: %d, Coluna: %d\n", i, 4);
    }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int tabuleiro[10][10] = {0};

    // Navio horizontal: linha 1, colunas 1 a 3
    for (j = 1; j <= 3; j++) {
        tabuleiro[1][j] = 3;
    }

    // Navio vertical: coluna 7, linhas 3 a 5
    for (i = 3; i <= 5; i++) {
        tabuleiro[i][7] = 3;
    }

    // Navio na diagonal principal
    for (i = 0; i < tamanhoNavio; i++) {
        tabuleiro[6 + i][1 + i] = 3;
    }

    // Navio na diagonal secundária
    for (i = 0; i < tamanhoNavio; i++) {
        tabuleiro[6 + i][8 - i] = 3;
    }

    printf("\n=== Nivel Aventureiro ===\n");
    printf("\nTabuleiro de Batalha Naval:\n\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
