#include <stdio.h>

float imc;
float altura;
float peso;

int main(void){

    printf("Insira o seu peso: ");
    scanf(" %f",&peso);
    printf("Insira a sua altura: ");
    scanf(" %f", &altura);

    imc = peso / (altura*altura);

    if(imc <= 18.5){
        printf("Classificação: Abaixo do Peso.\n");
    }else if(imc >= 18.5 && imc < 25){
        printf("Classificação: Saudável.\n");
    }else if(imc >= 25 && imc < 30){
        printf("Classificação: Peso em excesso.\n");
    }else if(imc >= 30 && imc < 35){
        printf("Classificação: AObesidade Grau I.\n");
    }else if(imc >= 35 && imc < 40){
        printf("Classificação: Obesidade Grau II.\n");
    }else if(imc >= 40){
        printf("Classificação: Obesidade Grau III.\n");
    }

}