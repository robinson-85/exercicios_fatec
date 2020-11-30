/* 4. Exiba a média dos números armazenados em uma matriz 3x3.*/

#include <stdio.h>

int main(){
    int media;
    int mat[3][3];

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf("O valor da coluna e %d e o valor da linha e %d \n", i, j);
                scanf("%d", &mat[i][j]);

                media = mat[i][j] + mat[i][j] / 2;
            }
        }

    printf("A media das matrizes 3x3 é: %d \n", media);

    getchar();
    return 0;
}