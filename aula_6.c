/* Aula 6 - 10/04/25

Foi apresentado o for, do...while e while

sendo que o do...while é igual ao switch, não muito utilizado e usa muito do processador e em algumas linguagens mais modernas não existe o switch.

Foi mostrado tambem como fazer "contagens"
*/

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "portuguese");

    int qtd, num, i, somatorio= 0, numero, pares = 0, impares = 0, quantidade;
    long produtorio= 1;
    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &num);
    printf("=======================\n");
    printf(" Tabuada do %d\n", num);
    printf("=======================\n");

    for (i = 0; i <= 10; i++) {
    printf("| %d x %d = %d |\n", num, i, num * i);
    }
    printf("=======================\n");

    printf("\n==============Separando=================\n");
    
    printf("Digite a quantidade de números: ");
    scanf("%d", &qtd);
    printf("===============================\n");
    printf(" Leitura de %d números\n", qtd);
    printf("===============================\n");
    for (i = 1; i <= qtd; i++) {
        printf("Digite o %dº número", i );
        scanf("%d", &num);
        somatorio+= num;
        produtorio*= num;
    }
    printf("===============================\n");
    printf("Somatório: %d\n", somatorio);
    printf("Produtótio: %ld\n", produtorio);
    printf("===============================\n");

    printf("\n==============Separando=================\n");

    printf("Quantos números você deseja digitar? ");
    scanf("%d", &quantidade);
    i=1;
    while(i<= quantidade){
        printf("Digite o %dºnúmero: ", i);
        scanf("%d", &numero);
        if(numero % 2 == 0){
            pares++;
        }else{
            impares++;
        }
        i++;
    }
    printf("\nQuantidadede números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}