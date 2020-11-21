/* 3. Criar 2 matrizes 3x4 somar seus valores e armazenar o resultado
em uma terceira matriz 3x4.*/

#include <stdio.h>

int main(){
    int soma = 0;
    int mat1[3][4], mat2[3][4], mat3[3][4];
    int i1, j1, i2, j2, somai, somaj;

        for(i1=0; i1<3; i1++){
            for(j1=0; j1<4; j1++){
                printf("O valor linha da matriz 1 e %d e o valor da coluna da matriz 1 e %d");
                scanf("%d", &mat1[3][4]);
            }
        }

        for(i2=0; i2<3; i2++){
            for(j2=0; j2<4; j2++){
                printf("O valor linha da matriz 2 e %d e o valor da coluna da matriz 2 e %d");
                scanf("%d", &mat2[3][4]);
            }
        }

        soma = mat1[3][4] + mat2[3][4];
        printf("A soma das duas matrizes é: %d\n", soma);

        for(somai=0; somai<3; somai++){
            for(somaj=0; somaj<3; somaj++){
                printf("O valor da terceira matriz e: \n");
                scanf("%d", &mat3[3][4]);

            }
        }

    getchar();
    return 0;
}