/*Aula 5 - 03/04/25*/
/*Apresentado o switch e tamb�m o for - sendo que o switch n�o � uma boa estrutura para ficar utilizando pois utiliza muito da CPU*/
/*E ao contr�rio do switch o for � uma estrutura bastante usada, geralmente usa-se quando conhecemos o inicio e final do c�digo*/

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n, i, num, resultado;

    printf("Digite um n�mero de 1 a 7: \n");
    printf("N�mero digitado: ");
    scanf("%d", &n);

    switch(n){
        case 1:
            printf("Domingo\n");
        break;
            
        case 2:
            printf("Segunda\n");
        break;

        case 3:
            printf("Ter�a\n");
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
            printf("S�bado\n");
        break;
        
        default:
            printf("Op��o inv�lida");
    }

    printf("Digite um n�mero para saber a tabuada: \n");
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