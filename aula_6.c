/* Aula 6 - 10/04/25

Foi apresentado o for, do...while e while

sendo que o do...while � igual ao switch, n�o muito utilizado e usa muito do processador e em algumas linguagens mais modernas n�o existe o switch.

Foi mostrado tambem como fazer "contagens"
*/

#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "portuguese");

    int qtd, num, i, somatorio= 0, numero, pares = 0, impares = 0, quantidade;
    long produtorio= 1;
    printf("Digite um n�mero para ver sua tabuada: ");
    scanf("%d", &num);
    printf("=======================\n");
    printf(" Tabuada do %d\n", num);
    printf("=======================\n");

    for (i = 0; i <= 10; i++) {
    printf("| %d x %d = %d |\n", num, i, num * i);
    }
    printf("=======================\n");

    printf("\n==============Separando=================\n");
    
    printf("Digite a quantidade de n�meros: ");
    scanf("%d", &qtd);
    printf("===============================\n");
    printf(" Leitura de %d n�meros\n", qtd);
    printf("===============================\n");
    for (i = 1; i <= qtd; i++) {
        printf("Digite o %d� n�mero", i );
        scanf("%d", &num);
        somatorio+= num;
        produtorio*= num;
    }
    printf("===============================\n");
    printf("Somat�rio: %d\n", somatorio);
    printf("Produt�tio: %ld\n", produtorio);
    printf("===============================\n");

    printf("\n==============Separando=================\n");

    printf("Quantos n�meros voc� deseja digitar? ");
    scanf("%d", &quantidade);
    i=1;
    while(i<= quantidade){
        printf("Digite o %d�n�mero: ", i);
        scanf("%d", &numero);
        if(numero % 2 == 0){
            pares++;
        }else{
            impares++;
        }
        i++;
    }
    printf("\nQuantidadede n�meros pares: %d\n", pares);
    printf("Quantidade de n�meros �mpares: %d\n", impares);

    return 0;
}