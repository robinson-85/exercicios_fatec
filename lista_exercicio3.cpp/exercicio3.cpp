/* 3. Escrever um algoritmo para determinar o consumo médio de um automóvel sendo
fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.*/

#include <stdio.h>
int main(){
    float cm, dt, tcg, resultado;
    printf("Digite a distancia percorrida pelo automovel: \t");
    scanf("%f", &dt);
    printf("Digite o total de combustivel gasto: \t");
    scanf("%f", &tcg);
    cm = dt / tcg;
    printf("O consumo medio do automovel e: %.2f\t", cm);
    getchar();
    return 0;

}
