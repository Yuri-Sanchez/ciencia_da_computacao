/*Aula 7 - 17/04/25*/
/*Foi apresentado as funções fora da função principal(main)
Assim é utilizado no meio profissional, facilitando a manutenção do código

void é uma função que não retorna nada para a função principal

A função "conversao" tem o "return" nela pois o que é calculado ali dentro vai ser utilizado mais a frente pelo código da função "main" para mostrar um resultado.
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

    printf("Digite um número para saber sua tabuada: ");
    scanf("%d", &num);

    mostrarTabuada(num);


    printf("Digite a temperatura em °C para saber sua conversão em °F: ");
    scanf("%f", &celcius);

    f = conversao(celcius);

    printf("\n%.2f° Celcius são %.2f° em Fahrenheit", celcius, f);
    return 0;
}