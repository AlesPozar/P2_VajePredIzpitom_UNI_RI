#include <stdio.h>
#include <stdlib.h>

int rekurzija(char** board){
    int valid = 0;
    for(int i = 0; i < 9; i++)//gremo cez celo tabelo
        for(int y = 0; y < 9; y++)
            if(board[i][y] == '.'){
                for(char k = '1'; k < ('9' + 1); k++){//probamo zamenjati z vsemi moznimi
                    valid = 1;
                    for(int n = 0; n < 9; n++)//pogledamo stolpec in vrstico
                        if(board[i][n] == k || board[n][y] == k || board[i / 3 * 3 + n / 3][y / 3 * 3 + n % 3] == k){//za vrstico || stolpec || okrozje 3x3
                            valid = 0;
                            break;
                        }
                    if(valid){//ce je vredi ga zamenjamo
                        board[i][y] = k;
                        if(rekurzija(board))
                            return 1;//ce pridemo do konca notranje rekurzije, pomen da smo resl in prne true za vse not
                        else
                            board[i][y] = '.';//pridemo skos in najdemo enga kjer noben ni mozni, potem mormo trenutno resetirati
                    }
                }
                return 0;//ni mogoce nobenga dat
            }
    return 1;//ce ne najde '.' da 1 za notranji pogoj
}

void solveSudoku(char** board, int boardSize, int* boardColSize){
    rekurzija(board);
}

int main(){
    char* inboard[10] = {
        "53..7....\0",
        "6..195...\0",
        ".98....6.\0",
        "8...6...3\0",
        "4..8.3..1\0",
        "7...2...6\0",
        ".6....28.\0",
        "...419..5\0",
        "....8..79\0"
    };

    char* resitevsudoka[10] = {
        "534678912\0",
        "672195348\0",
        "198342567\0",
        "859761423\0",
        "426853791\0",
        "713924856\0",
        "961537284\0",
        "287419635\0",
        "345286179\0"
    };

    int boardSize = 9, valid = 1;
    int boardColSize[9] = {9, 9, 9, 9, 9, 9, 9, 9, 9};
    char** board = (char**)malloc(9 * sizeof(char*));
    for(int i = 0; i < 9; i++){
        board[i] = (char*)malloc(10 * sizeof(char));
        for (int j = 0; j < 10; j++)
            board[i][j] = inboard[i][j];
    }
    
    solveSudoku(board, boardSize, boardColSize);

    printf("IZPIS RESITVE\n");
    for(int i = 0; i < 9; i++){
        for(int y = 0; y < 9; y++)
            printf("%c ", board[i][y]);
        printf("\n");
    }

    for(int i = 0; i < 9; i++)
        for(int y = 0; y < 9; y++)
            if(board[i][y] != resitevsudoka[i][y])
                valid = 0;
    printf("ALI JE VALID = %d\n", valid);
    return 0;
}