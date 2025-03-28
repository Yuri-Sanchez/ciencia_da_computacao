/*Aula do dia 27/03/2025*/

/*Aula de hoje brincamos um pouco mais com a estrutura de desvio "IF-Else", foi a presentado brevemente a palavra "void"(Indica que uma função ou método não retorna um valor) e alguns operadores lógicos, como "&&"(E), "||"(OU) e "!"(Não lógico)*/
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float renda;
    char cpf[14];

    printf("Parte 1\n");
    printf("Digite seu CPF: \n");
    scanf("%s", &cpf);
    printf("Digite sua renda mensal: \n");
    scanf("%f", &renda);

    if (renda < 2259.20)
        printf("Alíquota zero e dedução zero");
    else if (renda < 2826.65)
        printf("Alíquota 7,5%% e dedução R$ 169,44");
    else if (renda < 3751.05)
        printf("Alíquota 15%% e dedução R$ 381,44");
    else if (renda < 4664.68)
        printf("Alíquota 22,5%% e dedução R$ 662,77");
    else
        printf("Alíquota 27,5%% e dedução R$ 896,00"); 

    printf("\n-----------------------------------------\n");
    
    int l1, l2, l3;
    printf("Parte 2\n");
    printf("Digite o lado 1: \n");
    scanf("%d", &l1);
    printf("Digite o lado 2: \n");
    scanf("%d", &l2);
    printf("Digite o lado 3: \n");
    scanf("%d", &l3);

    if (l1 == l2 && l2 == l3)
        printf("Triângulo equilátero");
    else if (l1 == l2 || l2 == l3 || l1 == l3)
        printf("Triângulo isósceles");
    else
        printf("Triângulo escaleno");
}