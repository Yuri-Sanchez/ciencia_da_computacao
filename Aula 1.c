/*Aula do dia 06/03/25*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int A, B, soma, subtr, mult; 
    float divis;

    printf("****************\nDados Cadastrais\n****************");
    printf("\nNome: Yuri\n");
    printf("CPF: 150.595.717-69\n");
    printf("Telefone: (21)98178-1659\n");
    printf("Matricula: 202502388381\n");
    printf("------------------------\n");

    printf("Digite dois numeros para saber a soma, subtr., mult. e divis.!\n");
    printf("Digite o primeiro numero: \n");
    scanf("%d", &A);
    printf("Digite o segundo numero: \n");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = (float)A / B;

    /*Para o compilador precisar do resultado em ponto flutuante é necessário colocar (float) antes da variavél responsável pela divisão*/

    printf("Soma -> %d + %d = %d\n", A, B, soma);
    printf("Subtração. -> %d - %d = %d\n", A, B, subtr);
    printf("Multiplicação -> %d * %d = %d\n", A, B, mult);
    printf("Divisão. -> %d / %d = %.2f\n", A, B, divis);
}