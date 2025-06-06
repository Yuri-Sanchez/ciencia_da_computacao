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
    int soma = 0, qimpar, qpar;
    int qtd = l * c;
    qimpar = qpar = 0;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("\nDigite o componente [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
            
            if(matriz[i][j] % 2 == 0)
                qpar++;
            else   
                qimpar++;     
        }
    }

    float media = (float)soma/qtd; //É necessário adicionar o "float" na variável soma porque as variáveis "soma" e "qtd" estão declaradas como    inteiras, então quando é feita a divisão, a variável média entende que a divisão por dois inteiro é um número inteiro;
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nA soma dos elementos da matriz é %d", soma);
    printf("\nDos elementos digitados %d são impares e %d são pares", qimpar, qpar);    
    printf("\nA média dos elementos é %.2f", media);
    return 0;
}
