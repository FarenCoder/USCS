#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double numero=0,numero1=0, calculoSoma=0, calculoMultplicacao=0, calculoDivisao=0 , calculoSubtracao=0;
    printf("Digite o numero : \n");
    scanf("%lf",&numero );
    printf("Digite o numero 2: \n");
    scanf("%lf", &numero1);
    calculoSoma = numero+numero1;
    calculoMultplicacao = numero*numero1;
    calculoDivisao = numero/numero1;
    calculoSubtracao = numero-numero1;
    printf("O resultado da soma é: %0.2f\n", calculoSoma );
    printf("O resultado da multiplicação é: %0.2f\n", calculoMultplicacao );
    printf("O resultado da divisão é: %0.2f\n", calculoDivisao );
    printf("O resultado da subtração é: %0.2f\n", calculoSubtracao );
return 0;
}
