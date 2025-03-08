#include <stdio.h>

int main (){


int tabuleiro [10][10] = {0};
printf("Tabuleiro de Batalha Naval: \n");
for (int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
        printf("%d", tabuleiro[i][j]);
    }
    printf("\n");

}

int tamanho_navio = 3; //define o tamanho fixo dos navios

int linha_navio_horizontal = 2;
int coluna_navio_horizontal = 4;

for (int i = 0; i < tamanho_navio; i++)
{
    tabuleiro[linha_navio_horizontal][coluna_navio_horizontal + i] = 3;
} //definindo a posição do navio horizontal no array

int linha_navio_vertical = 5;
int coluna_navio_vertical = 6;

for (int i = 0; i < tamanho_navio; i++)
{
    tabuleiro[linha_navio_vertical + i][coluna_navio_vertical] = 3;
}

printf("\nTabuleiro de Batalha Naval:\n");
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%d ", tabuleiro[i][j]); // Mostra cada posição do tabuleiro
    }
    printf("\n"); // Muda para a próxima linha do tabuleiro
}







    return 0;
}