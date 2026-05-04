#include <stdio.h>
int main() {

    char tabu[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char escolhap1;
    char escolhap2;
    
    printf("=====JOGO DA VELHA=====\n");
    
    printf("Escolha X ou O: ");
    scanf(" %c", &escolhap1);

    if (escolhap1 == 'X') {
        escolhap2 = 'O';
    } else {
        escolhap2 = 'X';
    }

    //do {
        int cond = 1;
        if (tabu[0][0] == tabu[0][1] == tabu[0][2]) {
            cond = 0;
            } else if (tabu[1][0] == tabu[1][1] == tabu[1][2]) {
                cond = 0;
            } else if (tabu[2][0] == tabu[2][1] == tabu[2][2]) {
                cond = 0;
            } else if (tabu[0][0] == tabu[1][0] == tabu[2][0]) {
                cond = 0;
            } else if (tabu[0][1] == tabu[1][1] == tabu[2][1]) {
                cond = 0;
            } else if (tabu[0][2] == tabu[1][2] == tabu[2][2]) { 
                cond = 0;
            } else if (tabu[0][0] == tabu[1][1] == tabu[2][2]) {
                cond = 0;
            } else if (tabu[0][2] == tabu[1][1] == tabu[2][0]) {
                cond = 0;
            } else {

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j <  3; j++) {
                printf("%c ", tabu[i][j]);
            }
            printf("\n");
            printf("-----\n");
        }
       
        int coluna;
        int linha;

        printf("JOGADOR 1: escolha a linha e a coluna que irá jogar: ");
        scanf("%d %d", &linha, &coluna);
        tabu[linha][coluna] = escolhap1;
        
        printf("JOGADOR 2: escolha a linha e a coluna que irá jogar: ");
        scanf("%d %d", &linha, &coluna);
        tabu[linha][coluna] = escolhap2;

        }

    //} while (cond == 1);



    return 0;
}