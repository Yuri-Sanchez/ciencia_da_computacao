/*
Aula 8 - 05/06/2025
Matriz e vetores 

Observa��o importante: Quando for trabalhar com matriz em C, � importante fazer a declara��o da vari�vel de linha(l) e coluna(c) antes, e depois declarar a matriz[l][c]
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

    float media = (float)soma/qtd; //� necess�rio adicionar o "float" na vari�vel soma porque as vari�veis "soma" e "qtd" est�o declaradas como    inteiras, ent�o quando � feita a divis�o, a vari�vel m�dia entende que a divis�o por dois inteiro � um n�mero inteiro;
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nA soma dos elementos da matriz � %d", soma);
    printf("\nDos elementos digitados %d s�o impares e %d s�o pares", qimpar, qpar);    
    printf("\nA m�dia dos elementos � %.2f", media);
    return 0;
}
