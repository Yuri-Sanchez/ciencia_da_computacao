/*Aula 5 - 03/04/25*/
/*Apresentado o switch e também o for - sendo que o switch não é uma boa estrutura para ficar utilizando pois utiliza muito da CPU*/
/*E ao contrário do switch o for é uma estrutura bastante usada, geralmente usa-se quando conhecemos o inicio e final do código*/

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n, i, num, resultado;

    printf("Digite um número de 1 a 7: \n");
    printf("Número digitado: ");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("Domingo\n");
        break;
            
        case 2:
            printf("Segunda\n");
        break;

        case 3:
            printf("Terça\n");
        break;

        case 4:
            printf("Quarta\n");
        break;

        case 5:
            printf("Quinta\n");
        break;

        case 6:
            printf("Sexta\n");
        break;

        case 7:
            printf("Sábado\n");
        break;
        
        default:
            printf("Opção inválida");
    }

    printf("Digite um número para saber a tabuada: \n");
    scanf("%d", &num);
    printf("\n=============");
    printf("\nTabuada do %d\n", num);
    printf("=============\n");

    for(i=1; i<=10; i++){
        resultado = num * i;
        printf("|%d x %d = %d|\n", num, i, resultado);
    }
    return 0;
}