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
    
    
     
    float l[3];

    for (int i = 0; i <=2; i++){
        printf("Digite o %d° lado do triangulo: \n", i + 1);
        scanf("%f", &l[i]);
    }

    if (l[0] == l[1] && l[1] == l[2])
    printf("Triângulo equilátero");
else if (l[0] == l[1] || l[1] == l[2] || l[0] == l[2])
    printf("Triângulo isósceles");
else
    printf("Triângulo escaleno");

    return 0;
}