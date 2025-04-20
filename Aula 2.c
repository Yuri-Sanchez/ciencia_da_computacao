/*Aula do dia 13/03/2025*/
/*Deu inicio a estrutura IF - Else*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int idade;
    char nome[20], cpf[15], matricula[15];

    printf("\n**************************\nUnivercidade Estácio de Sá\n**************************\n");

    printf("Digite seus dados para cadastro: \n");
    
    printf("Nome: \n");
    scanf("%s", &nome);
    
    printf("Matrícula: \n");
    scanf("%s", &matricula);

    printf("Idade: \n");
    scanf("%d", &idade);

    printf("CPF: \n");
    scanf("%s", &cpf);

    printf("\n**********\nRelatório:\n**********\n");
    printf("Nome: %s\n", nome);
    printf("Matrícula: %s\n", matricula);
    printf("Idade: %d\n", idade);
    printf("CPF: %s\n", cpf);

    if (idade >= 18){
        printf("Aluno maior de idade, pode ser responsável financeiro.\n");
    }else{
        printf("Aluno menor de idade, necessita de um responsável financeiro.\n");
    }

    return 0;
}