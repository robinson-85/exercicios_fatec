/* 4. Faça um programa que receba três números e mostre-os em ordem crescente.
Suponha que o usuário digitará três números diferentes. */

#include <stdio.h>
int main(){
    int n1, n2, n3;
    
    printf("\nDeclare três numeros: \n");
    scanf("%d%d%d", &n1, &n2, &n3);
    
    if(n1 < n2 && n1 < n3){
        if(n2 < n3)
            printf("%d - %d - %d\n", n1, n2, n3);
            else
                printf("%d - %d - %d\n", n1, n2, n3);
    }
    if(n2 < n1 && n2 < n3){
        if(n1<n3)
        printf("%d - %d - %d\n", n2, n1, n3);
        else
        printf("%d - %d - %d\n", n2, n1, n3);
    }
    if(n3<n1 && n3<n2){
        if(n1<n2)
        printf("%d - %d - %d\n", n3, n1, n2);
        else
        printf("%d - %d - %d\n", n3, n1, n2);
    }
        
    getchar();
    return 0;
}