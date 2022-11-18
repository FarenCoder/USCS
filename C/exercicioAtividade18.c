#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double numero=0,numero1=0,calculoSubtracao=0;
printf("================INICIO DO PROGRAMA=================\n");
    printf("Digite o numero 1: \n");
    scanf("%lf",&numero );
    printf("Digite o numero 2: \n");
    scanf("%lf",&numero1 );
              if (numero1 >= numero)
               {
                   calculoSubtracao = numero1 - numero;
                   printf("O resultado da subtração é:%0.2f\n " ,calculoSubtracao);
               }
               else
               {
                   calculoSubtracao = numero - numero1;
                   printf("O resultado da subtração é:%0.2f\n " , calculoSubtracao);
               }
            printf("\n================FIM DO PROGRAMA=================\n");
return 0;
}

