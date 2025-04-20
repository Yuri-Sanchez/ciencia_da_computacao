/*Aula 7 - 17/04/25*/
/*Foi apresentado as fun��es fora da fun��o principal(main)
Assim � utilizado no meio profissional, facilitando a manuten��o do c�digo

void � uma fun��o que n�o retorna nada para a fun��o principal

A fun��o "conversao" tem o "return" nela pois o que � calculado ali dentro vai ser utilizado mais a frente pelo c�digo da fun��o "main" para mostrar um resultado.
*/

#include <stdio.h>
#include <locale.h>

void mostrarTabuada(int numero){
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", numero, i, numero*i );
    }
}

float conversao(float c){
    return (c*9)/5 + 32;
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    float f, celcius;

    printf("Digite um n�mero para saber sua tabuada: ");
    scanf("%d", &num);

    mostrarTabuada(num);


    printf("Digite a temperatura em �C para saber sua convers�o em �F: ");
    scanf("%f", &celcius);

    f = conversao(celcius);

    printf("\n%.2f� Celcius s�o %.2f� em Fahrenheit", celcius, f);
    return 0;
}