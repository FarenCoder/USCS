#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double valorA=0,valorB=0,valorC=0;
printf("================INICIO DO PROGRAMA=================\n");
    printf("Digite o valor A: \n");
    scanf("%lf",&valorA );
    printf("Digite o valor B: \n");
    scanf("%lf",&valorB);
    printf("Digite o valor C: \n");
    scanf("%lf",&valorC );
            if(valorA <= valorB && valorB <= valorC)
            {
             printf("A ordem crescente:%0.2f,%0.2f,%0.2f" , valorA ,valorB , valorC);
            }
            else if (valorA <= valorC && valorC <= valorB)
            {
             printf("A ordem crescente:%0.2f,%0.2f,%0.2f", valorA , valorC , valorB);
            }
            else if (valorB <= valorA && valorA <= valorC)
            {
             printf("A ordem crescente:%0.2f,%0.2f,%0.2f" , valorB , valorA , valorC);
            }
            else if (valorB <= valorC && valorC <= valorA)
            {
                printf("A ordem crescente:%0.2f,%0.2f,%0.2f" , valorB , valorC ,  valorA);
            }
            else if (valorC <= valorA && valorA <= valorB)
            {
                printf("A ordem crescente:%0.2f,%0.2f,%0.2f" , valorC , valorA , valorB);
            }
            else//valorC <= valorB && valorB < valorA
            {
                printf("A ordem crescente:%0.2f,%0.2f,%0.2f" , valorC , valorB , valorA);
            }
return 0;
}

