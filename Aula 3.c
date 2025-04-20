/*Aula do dia 20/03/2025*/

/*Aula de extrema importância, não há necessidade de estar colocando dentro da condição "if" o operador lógico "&& ou and", pois isso consome mais do processador e profissionalmente é considerado um desenvolvedor ruim*/
/*Ex: desenvolvedor ruim:
      if (imc >= 18,5 && imc <= 24,9)... */
/*Ex: desenvolvedor bom: 
      if (imc >= 18,5)*/

/*Não há a necessidade de estar utilizando operador lógico para fazer o que já seria feito, apenas usaria mais do processador e seria mal visto profissionalmente.*/

#include <stdio.h>
#include <locale.h>

float calcularIMC(float p, float a){
    return p / (a * a);
}

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    float peso, altura, imc;

    printf("Digite as informações abaixo para saber seu IMC: \n");
    printf("Peso(KG): \n");
    scanf("%f", &peso);
    printf("Altura(metros): \n");
    scanf("%f", &altura);

    imc = calcularIMC(peso, altura);

    printf("Seu índice de massa corporal(IMC) é: %.2f\n", imc);

    if(imc >= 40){
        printf("Obesidade grau III(Mórbida)\n");
    }else if (imc >= 35 ){
        printf("Obesidade grau II(Severa)\n");
    }else if (imc >= 30){
        printf("Obesidade grau I(Moderada)\n");
    }else if(imc >= 25){
        printf("Excesso de peso\n");
    }else if(imc >= 18.5){
        printf("Peso normal\n");
    }else{
        printf("Baixo peso\n");
    }

    return 0;
}