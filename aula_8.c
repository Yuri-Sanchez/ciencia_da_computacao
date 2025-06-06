/*
Aula 8 - 05/06/2025
Matriz e vetores 

Observação importante: Quando for trabalhar com matriz em C, é importante fazer a declaração da variável de linha(l) e coluna(c) antes, e depois declarar a matriz[l][c]
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int l, c;

    printf("Digite a linha e coluna da matriz que deseja formar, respectivamente: ");
    scanf("%d%d", &l, &c);

    int matriz[l][c];

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("\nDigite o componente [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }    
    return 0;
}
