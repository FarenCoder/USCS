#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double Salario_Fixo, Salario_Final, comissao = 0.2,Total_Vendas;
    char nome[40];
    printf("Digite seu nome: \n");
    gets(nome);
    printf("Digite seu salario fixo: \n");
    scanf("%lf",&Salario_Fixo );
    printf("Digite o total de vendas do mes: ");
    scanf("%lf", &Total_Vendas);
    Salario_Final = Salario_Fixo + (Total_Vendas * comissao);
    printf("O salario final é: %0.2f", Salario_Final );
return 0;
}

