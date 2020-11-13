/* 3. Escrever um algoritmo para determinar o consumo médio de um automóvel sendo
fornecida a distância total percorrida pelo automóvel e o total de combustível gasto.*/

#include <stdio.h>
int main(){
    float consumo_medio, distancia_total, total_combustivel_gasto;
    printf("Digite a distancia percorrida pelo automovel(em km): \t");
    scanf("%f", &distancia_total);
    printf("Digite o total de combustivel gastoe(em litros): \t");
    scanf("%f", &total_combustivel_gasto);

    consumo_medio = distancia_total / total_combustivel_gasto;

    printf("O consumo medio do automovel e: %.2f \n", consumo_medio);

    getchar();
    return 0;

}
