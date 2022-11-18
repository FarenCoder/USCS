#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
double numero=0, numero1=0;
    printf("Digite o numero 1:");
    scanf("%lf",&numero );
    printf("Digite o numero 2:");
    scanf("%lf",&numero1 );
    if(numero==numero1)
    {
    	printf("Os numero são iguais!" );
	}
    else
    {
    	if(numero>numero1)
    	{
    	printf("Os numero não são iguais, o maior é:%0.2f",numero );
		}
		else{
    	printf("Os numero não são iguais, o maior é:%0.2f",numero1 );
    }
	}
return 0;
}	
