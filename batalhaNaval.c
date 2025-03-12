#include <stdio.h>

int main() {
    
    int tabuleiro[10][10] = {0}; //matriz 10x10 que representa o tabuleiro, sendo inicializada com 0 (agua)

    
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    } //A estrutura de repetição percorre linha por linha da matriz exibindo uma por uma

    int tamanho_navio = 3;

    // Navio horizontal
    int linha_navio_horizontal = 2;
    int coluna_navio_horizontal = 4;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] = 3;
    }

    // Navio vertical
    int linha_navio_vertical = 5;
    int coluna_navio_vertical = 6;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] = 3;
    }

    // Navio diagonal 1
    int linha_diag1 = 6;
    int coluna_diag1 = 0;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_diag1 + i][coluna_diag1 + i] = 3;
    }

    // Navio diagonal 2
    int linha_diag2 = 3;
    int coluna_diag2 = 5;
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_diag2 + i][coluna_diag2 - i] = 3;
    }

    // Matriz da habilidade cruz
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    // Matriz da habilidade cone
    int cone[5][5] = {
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    // Matriz da habilidade octaedro
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // Posições centrais das habilidades
    int origem_cruz_linha = 4, origem_cruz_coluna = 4;
    int origem_cone_linha = 2, origem_cone_coluna = 7;
    int origem_octa_linha = 7, origem_octa_coluna = 5;

    //Aplicando habilidade cruz
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (cruz[i][j] == 1) {
                int lin = origem_cruz_linha - 2 + i;
                int col = origem_cruz_coluna - 2 + j;
                if (lin >= 0 && lin < 10 && col >= 0 && col < 10)
                    tabuleiro[lin][col] = 5;
            }

            printf("\nTabuleiro Cruz:\n");
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    printf("%d ", tabuleiro[i][j]);
                }
                printf("\n");
            }
    
    
    
    //Aplicando habilidade cone
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (cone[i][j] == 1) {
                int lin = origem_cone_linha - 2 + i;
                int col = origem_cone_coluna - 2 + j;
                if (lin >= 0 && lin < 10 && col >= 0 && col < 10)
                    tabuleiro[lin][col] = 5;
            }

            printf("\nTabuleiro com cone:\n");
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    printf("%d ", tabuleiro[i][j]);
                }
                printf("\n");
            }
    
    
    //Aplicando habilidade octaedro
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (octaedro[i][j] == 1) {
                int lin = origem_octa_linha - 2 + i;
                int col = origem_octa_coluna - 2 + j;
                if (lin >= 0 && lin < 10 && col >= 0 && col < 10)
                    tabuleiro[lin][col] = 5;
            }

            printf("\nTabuleiro com octaedro:\n");
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    printf("%d ", tabuleiro[i][j]);
                }
                printf("\n");
            }
    
    
    
    
    // Exibe o tabuleiro final com os navios e as habilidades
    printf("\nTabuleiro com navios e habilidades aplicadas:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}


