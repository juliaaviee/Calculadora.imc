
//calculadora de IMC
#include <stdio.h>

int main()
{
    float imc;
    float peso;
    float altura;
    printf("digite seu peso em kg: \n");
    scanf("%f", &peso);
    printf("Digite sua altura em metros: \n");
    scanf("%f", &altura);
    imc=peso/(altura*altura);
    printf("Seu imc é:%.2f", imc);

    return 0;
}
