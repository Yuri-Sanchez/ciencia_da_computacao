/*Aula do dia 27/03/2025*/

/*Aula de hoje brincamos um pouco mais com a estrutura de desvio "IF-Else", foi a presentado brevemente a palavra "void"(Indica que uma fun��o ou m�todo n�o retorna um valor) e alguns operadores l�gicos, como "&&"(E), "||"(OU) e "!"(N�o l�gico)*/
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
        printf("Al�quota zero e dedu��o zero");
    else if (renda < 2826.65)
        printf("Al�quota 7,5%% e dedu��o R$ 169,44");
    else if (renda < 3751.05)
        printf("Al�quota 15%% e dedu��o R$ 381,44");
    else if (renda < 4664.68)
        printf("Al�quota 22,5%% e dedu��o R$ 662,77");
    else
        printf("Al�quota 27,5%% e dedu��o R$ 896,00"); 

    printf("\n-----------------------------------------\n");
    
    
     
    float l[3];

    for (int i = 0; i <=2; i++){
        printf("Digite o %d� lado do triangulo: \n", i + 1);
        scanf("%f", &l[i]);
    }

    if (l[0] == l[1] && l[1] == l[2])
    printf("Tri�ngulo equil�tero");
else if (l[0] == l[1] || l[1] == l[2] || l[0] == l[2])
    printf("Tri�ngulo is�sceles");
else
    printf("Tri�ngulo escaleno");

    return 0;
}