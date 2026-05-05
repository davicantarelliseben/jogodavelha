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

    int cond = 1;

    do {
        
        if (tabu[0][0] == escolhap1 && tabu[0][1] == escolhap1 && tabu[0][2] == escolhap1) {
            cond = 0;
            } else if (tabu[1][0] == escolhap1 && tabu[1][1] == escolhap1 && tabu[1][2] == escolhap1 ) {
                cond = 0;
            } else if (tabu[2][0] == escolhap1 && tabu[2][1] == escolhap1 && tabu[2][2] == escolhap1) {
                cond = 0;
            } else if (tabu[0][0] == escolhap1 && tabu[1][0] == escolhap1 && tabu[2][0] == escolhap1) {
                cond = 0;
            } else if (tabu[0][1] == escolhap1 && tabu[1][1] == escolhap1 && tabu[2][1] == escolhap1) {
                cond = 0;
            } else if (tabu[0][2] == escolhap1 && tabu[1][2] == escolhap1 && tabu[2][2] == escolhap1) { 
                cond = 0;
            } else if (tabu[0][0] == escolhap1 && tabu[1][1] == escolhap1 && tabu[2][2] == escolhap1) {
                cond = 0;
            } else if (tabu[0][2] == escolhap1 && tabu[1][1] == escolhap1 && tabu[2][0] == escolhap1) {
                cond = 0;
            } else if (tabu[0][0] == escolhap2 && tabu[0][1] == escolhap2 && tabu[0][2] == escolhap2) {
                cond = 2;
            } else if (tabu[1][0] == escolhap2 && tabu[1][1] == escolhap2 && tabu[1][2] == escolhap2) {
                cond = 2;
            } else if (tabu[2][0] == escolhap2 && tabu[2][1] == escolhap2 && tabu[2][2] == escolhap2) {
                cond = 2;
            } else if (tabu[0][0] == escolhap2 && tabu[1][0] == escolhap2 && tabu[2][0] == escolhap2) {
                cond = 2;
            } else if (tabu[0][1] == escolhap2 && tabu[1][1] == escolhap2 && tabu[2][1] == escolhap2) {
                cond = 2;
            } else if (tabu[0][2] == escolhap2 && tabu[1][2] == escolhap2 && tabu[2][2] == escolhap2) { 
                cond = 2;
            } else if (tabu[0][0] == escolhap2 && tabu[1][1] == escolhap2 && tabu[2][2] == escolhap2) {
                cond = 2;
            } else if (tabu[0][2] == escolhap2 && tabu[1][1] == escolhap2 && tabu[2][0] == escolhap2) {
                cond = 2;
            } else {

        int coluna;
        int linha;

            do {
            printf("JOGADOR 1: escolha a linha e a coluna que irá jogar: ");
            scanf("%d %d", &linha, &coluna);
                if (tabu[linha][coluna] == ' ') {
                    tabu[linha][coluna] = escolhap1;
                    break;
                } 
                printf("Digite novamente (linha e coluna já escolhidas):\n");
            } while (tabu[linha][coluna] == escolhap2);
            
            do {
            printf("JOGADOR 2: escolha a linha e a coluna que irá jogar: ");
            scanf("%d %d", &linha, &coluna);
            if (tabu[linha][coluna] == ' ') {
                    tabu[linha][coluna] = escolhap2;
                    break;
                }
                printf("Digite novamente (linha e coluna já escolhidas):\n");
            } while (tabu[linha][coluna] == escolhap1);
            
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j <  3; j++) {
                printf("%c ", tabu[i][j]);
            }
            printf("\n");
            printf("-----\n");
        }
    }
        
    } while (cond == 1);

    if (cond == 0) {
        printf("O jogador 1 venceu!\n");
    } else if (cond == 2) {
        printf("O jogador 2 venceu!\n");
    } else {
        printf("O jogo empatou.\n");
    }

    return 0;
}