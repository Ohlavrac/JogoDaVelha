#include <stdio.h>
#include <stdlib.h>
#define SIZEY 3
#define SIZEX 3

void showCordX();

int main() {
    char table[SIZEY][SIZEX] = {'#','#','#','#','#','#','#','#','#'};
    int y, x;
    int gameRunning = 1;
    int turn = 0, turnCount=0;


    showCordX();
    for (y=0; y<SIZEY; y++) {
        printf("%d|", y);
        for (x=0; x<SIZEX; x++) {
            printf("%c ", table[y][x]);
        }
        printf("\n");
    }

    while (gameRunning != 0) {
        if (turn == 0) {
            printf("\nTURNO DO X\n");
            printf("Informe a coordenada da sua jogada(y,x): ");
            scanf("%d,%d", &y, &x);
            while (y < 0 || y > 2 || x < 0 || x > 2) {
                printf("\nERRO COORDENADA NÃO ENCONTRADA TENTE NOVAMENTE\n");
                printf("Informe a coordenada da sua jogada(y,x): ");
                scanf("%d,%d", &y, &x);
            }
            while (table[y][x] == 'O' || table[y][x] == 'X'){
                printf("\nJa existe um O nessa posição, escolha uma posição vazia\n");
                printf("Informe a coordenada da sua jogada(y,x): ");
                scanf("%d,%d", &y, &x);
            }
            table[y][x] = 'X';

            if (table[0][0] == 'X' && table[0][1] == 'X' && table[0][2] == 'X') {
                printf("\nO jogador X Ganhou\n");
                gameRunning = 0;
            }

            else if (table[1][0] == 'X' && table[1][1] == 'X' && table[1][2] == 'X') {
                printf("\nO jogador X Ganhou\n");
                gameRunning = 0;
            }

            else if (table[2][0] == 'X' && table[2][1] == 'X' && table[2][2] == 'X') {
                printf("\nO jogador X Ganhou\n");
                gameRunning = 0;
            }

            else if (table[0][0] == 'X' && table[1][0] == 'X' && table[2][0] == 'X') {
                printf("\nO jogador X Ganhou\n");
                gameRunning = 0;
            }

            else if (table[0][1] == 'X' && table[1][1] == 'X' && table[2][1] == 'X') {
                printf("\nO jogador X Ganhou\n");
                gameRunning = 0;
            }

            else if (table[0][2] == 'X' && table[1][2] == 'X' && table[2][2] == 'X') {
                printf("\nO jogador X Ganhou\n");
                gameRunning = 0;
            }

            else if (table[0][0] == 'X' && table[1][1] == 'X' && table[2][2] == 'X') {
                printf("\nO jogador X Ganhou\n");
                gameRunning = 0;
            }

            else if (table[0][2] == 'X' && table[1][1] == 'X' && table[2][0] == 'X') {
                printf("\nO jogador X Ganhou\n");
                gameRunning = 0;
            }

            turnCount++;
            if (turnCount == 9) {
                printf("\nO jogo acabou\n");
                break;
            }

            turn = 1;
        }

        showCordX();
        for (y=0; y<SIZEY; y++) {
            printf("%d|", y);
            for (x=0; x<SIZEX; x++) {
                printf("%c ", table[y][x]);
            }
            printf("\n");
        }

        if (gameRunning == 0) {
                break;
            }

        if (turn == 1) {
            printf("\nTURNO DO O\n");
            printf("Informe a coordenada da sua jogada(y,x): ");
            scanf("%d,%d", &y, &x);
            while (y < 0 || y > 2 || x < 0 || x > 2) {
                printf("\nERRO COORDENADA NÃO ENCONTRADA TENTE NOVAMENTE\n");
                printf("Informe a coordenada da sua jogada(y,x): ");
                scanf("%d,%d", &y, &x);
            }
            while (table[y][x] == 'X' || table[y][x] == 'O'){
                printf("\nJa existe um item nessa posição, escolha uma posição vazia\n");
                printf("Informe a coordenada da sua jogada(y,x): ");
                scanf("%d,%d", &y, &x);
            }
            table[y][x] = 'O';

            if (table[0][0] == 'O' && table[0][1] == 'O' && table[0][2] == 'O') {
                printf("\nO jogador O Ganhou\n");
                gameRunning = 0;
            }

            else if (table[1][0] == 'O' && table[1][1] == 'O' && table[1][2] == 'O') {
                printf("\nO jogador O Ganhou\n");
                gameRunning = 0;
            }

            else if (table[2][0] == 'O' && table[2][1] == 'O' && table[2][2] == 'O') {
                printf("\nO jogador O Ganhou\n");
                gameRunning = 0;
            }

            else if (table[0][0] == 'O' && table[1][0] == 'O' && table[2][0] == 'O') {
                printf("\nO jogador O Ganhou\n");
                gameRunning = 0;
            }

            else if (table[0][1] == 'O' && table[1][1] == 'O' && table[2][1] == 'O') {
                printf("\nO jogador O Ganhou\n");
                gameRunning = 0;
            }

            else if (table[0][2] == 'O' && table[1][2] == 'O' && table[2][2] == 'O') {
                printf("\nO jogador O Ganhou\n");
                gameRunning = 0;
            }

            else if (table[0][0] == 'O' && table[1][1] == 'O' && table[2][2] == 'O') {
                printf("\nO jogador O Ganhou\n");
                gameRunning = 0;
            }

            else if (table[0][2] == 'O' && table[1][1] == 'O' && table[2][0] == 'O') {
                printf("\nO jogador O Ganhou\n");
                gameRunning = 0;
            }

            turnCount++;
            turn = 0;
        }

        showCordX();
        for (y=0; y<SIZEY; y++) {
            printf("%d|", y);
            for (x=0; x<SIZEX; x++) {
                printf("%c ", table[y][x]);
            }
            printf("\n");
        }

        if (gameRunning == 0) {
                break;
            }
        system("clear");
    }

    return 0;
}

void showCordX() {
    int c;
    printf("  ");
    //Numeros informando a cordenadas X
    for (c=0; c<3; c++) {
        printf("%d ", c);
    }
    printf("\n");
    printf("  ");

    for (c=0; c<3; c++) {
        printf("- ");
    }
    printf("\n");
}