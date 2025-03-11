#include <stdio.h>

int main (){
    //Define a matriz tabuleiro de 10x10
    int tabuleiro [10][10] = {0};
    //Exibe o tabuleir vazio, percorrendo todas as linhas e colunas da matriz com a estrutura de repetição
    printf("Tabuleiro de Batalha Naval: \n");
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    } 

    int tamanho_navio = 3; //define o tamanho fixo dos navios

    // Posicionando Navio horizontal, deifinindo primeiro sua posição inicial e depois percorrendo cada linha adicionando a partir da posição inicial o 3
    int linha_navio_horizontal = 2;
    int coluna_navio_horizontal = 4;

    for (int i = 0; i < tamanho_navio; i++)
    {
        tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] = 3;
    }

    // Posicionando Navio vertical, deifinindo primeiro sua posição inicial e depois percorrendo cada linha adicionando a partir da posição inicial o 3
    int linha_navio_vertical = 5;
    int coluna_navio_vertical = 6;

    for (int i = 0; i < tamanho_navio; i++)
    {
        tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] = 3;
    }
// Posicionando Navio diagonal 1, deifinindo primeiro sua posição inicial e depois percorrendo cada linha adicionando a partir da posição inicial o 3
    int linha_diag1 = 6;
    int coluna_diag1 = 0;

    for(int i = 0; i < tamanho_navio; i++)
    {
        tabuleiro[linha_diag1 + i][coluna_diag1 + i] = 3;
    }
    
    // Posicionando Navio diagonal 2, deifinindo primeiro sua posição inicial e depois percorrendo cada linha adicionando a partir da posição inicial o 3
    int linha_diag2 = 3;
    int coluna_diag2 = 5;
    
    

    for (int i = 0; i < tamanho_navio; i++)
    {
        tabuleiro[linha_diag2 + i][coluna_diag2 - i] = 3;
    }
//Exibe o tabuleiro já com os navios posicionados
    printf("\nTabuleiro com os navios posicionados: \n");
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
    printf("\n");
    }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}


