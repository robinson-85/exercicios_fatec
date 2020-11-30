/* 3. Criar 2 matrizes 3x4 somar seus valores e armazenar o resultado
em uma terceira matriz 3x4.*/

#include <stdio.h>

int main(){
    int soma = 0, somai = 0, somaj = 0;
    int mat1[3][4], mat2[3][4], mat3[3][4];
    
        for(int i=0; i<3; i++){
            for(int j=0; j<4; j++){
                printf("O valor linha da matriz 1 e %d e o valor da coluna da matriz 1 e %d \n", i, j);
                scanf("%d", &mat1[3][4]);
            }
        }

        for(int i=0; i<3; i++){
            for(int j=0; j<4; j++){
                printf("O valor linha da matriz 2 e %d e o valor da coluna da matriz 2 e %d \n", i, j);
                scanf("%d", &mat2[3][4]);
            }
        }

        soma = mat1[3][4] + mat2[3][4];
        
        printf("A soma das duas matrizes é: %d\n", soma);

        for(somai=0; somai<3; somai++){
            for(somaj=0; somaj<3; somaj++){
                printf("O valor linha da matriz 3 e %d e o valor da coluna da matriz 3 e %d \n \n", somai, somaj);
                scanf("%d", &mat3[3][4]);

            }
        }

    getchar();
    return 0;
}